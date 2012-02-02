//  Copyright (c) 2011 Matthew Anderson
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_fwd.hpp>
#include <hpx/include/iostreams.hpp>
#include <hpx/lcos/eager_future.hpp>
#include <hpx/lcos/async_future_wait.hpp>

#include "../stubs/point.hpp"
#include "point.hpp"

#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>

#include <iostream>
#include <fstream>

/* Spread the two 64-bit numbers into five nonzero values in the correct
 * range. */
void make_mrg_seed(uint64_t userseed1, uint64_t userseed2, uint_fast32_t* seed) {
  seed[0] = (userseed1 & 0x3FFFFFFF) + 1;
  seed[1] = ((userseed1 >> 30) & 0x3FFFFFFF) + 1;
  seed[2] = (userseed2 & 0x3FFFFFFF) + 1;
  seed[3] = ((userseed2 >> 30) & 0x3FFFFFFF) + 1;
  seed[4] = ((userseed2 >> 60) << 4) + (userseed1 >> 60) + 1;
}

static void compute_edge_range(int rank, int size, int64_t M, int64_t* start_idx, int64_t* end_idx) {
  int64_t rankc = (int64_t)(rank);
  int64_t sizec = (int64_t)(size);
  *start_idx = rankc * (M / sizec) + (rankc < (M % sizec) ? rankc : (M % sizec));
  *end_idx = (rankc + 1) * (M / sizec) + (rankc + 1 < (M % sizec) ? rankc + 1 : (M % sizec));
}

///////////////////////////////////////////////////////////////////////////////
namespace graph500 { namespace server
{
    void point::init(std::size_t objectid,std::size_t log_numverts,std::size_t number_partitions,
                     std::vector<hpx::naming::id_type> const& point_components)
    {
      idx_ = objectid;
      point_components_ = point_components;
      // Spread the two 64-bit numbers into five nonzero values in the correct
      //  range.
      uint_fast32_t seed[5];
      uint64_t userseed1 = 1;
      uint64_t userseed2 = 1;
      make_mrg_seed(userseed1, userseed2, seed);

      int64_t M = INT64_C(16) << log_numverts;

      int64_t start_idx, end_idx;
      compute_edge_range(objectid, number_partitions, M, &start_idx, &end_idx);
      int64_t nedges = end_idx - start_idx;

      local_edges_.resize(nedges);

      generate_kronecker_range(seed, log_numverts, start_idx, end_idx, &*local_edges_.begin());

      // find the biggest node or neighbor
      std::size_t maxnode = 0;
      minnode_ = 99999;
      for (std::size_t i=0;i<local_edges_.size();i++) {
        if ( local_edges_[i].v0 > maxnode ) maxnode = local_edges_[i].v0;
        if ( local_edges_[i].v1 > maxnode ) maxnode = local_edges_[i].v1;

        if ( local_edges_[i].v0 < minnode_ ) minnode_ = local_edges_[i].v0;
        if ( local_edges_[i].v1 < minnode_ ) minnode_ = local_edges_[i].v1;
      }
      maxnode++;
      std::size_t N = maxnode-minnode_;
      size_est_ = N;
      reset_list_.reserve(size_est_);

      neighbors_.resize(maxnode-minnode_);

      for (std::size_t i=0;i<local_edges_.size();i++) {
        std::size_t node = local_edges_[i].v0;
        std::size_t neighbor = local_edges_[i].v1;
        if ( node != neighbor ) {
          neighbors_[node-minnode_].push_back(neighbor);
          neighbors_[neighbor-minnode_].push_back(node);
        }
      }

      parent_.resize(N,N,1);
      // initialize
      for (std::size_t k=0;k<parent_.ksize();k++) {
        for (std::size_t j=0;j<parent_.jsize();j++) {
          for (std::size_t i=0;i<parent_.isize();i++) {
            parent_(i,j,k) = 0;
          }
        }  
      }

    }

    bool point::has_edge(std::size_t edge) 
    {
      bool found = false;
      for (std::size_t i=0;i<local_edges_.size();i++) {
        if ( edge == local_edges_[i].v0 || edge == local_edges_[i].v1 ) {
          found = true;
          break;
        }
      }
      return true;
    }

    void point::bfs()
    {
      // search the local graph with each node as root
      for (std::size_t i=0;i<local_edges_.size();i++) {
        std::size_t root_node;
        for (std::size_t j=0;j<2;j++) {
          if ( j == 0 ) root_node = local_edges_[i].v0;
          else root_node = local_edges_[i].v1;
          // see if the root_node has been searched already
          if ( parent_(root_node-minnode_,root_node-minnode_,0) != root_node ) {
            std::queue<std::size_t> q;
            parent_(root_node-minnode_,root_node-minnode_,0) = root_node;
            q.push(root_node);

            while (!q.empty()) {
              std::size_t node = q.front(); q.pop();

              std::vector<std::size_t> const& node_neighbors = neighbors_[node-minnode_];
              std::vector<std::size_t>::const_iterator end = node_neighbors.end();
              for (std::vector<std::size_t>::const_iterator it = node_neighbors.begin();
                           it != end; ++it)
              {
                std::size_t& node_parent = parent_(root_node-minnode_,*it-minnode_,0);
                if (!node_parent) {
                  node_parent = node;
                  q.push(*it);
                }
              }
            }
          } 
        }
     
      }
   
    }

    void point::merge_graph(std::size_t parent, std::vector<std::size_t> const& neighbors) {
      // Check to see if the any of the neighbors are on this partition
      for (std::size_t i=0;i<neighbors.size();i++) {
        std::size_t node = neighbors[i];
        if ( node - minnode_ < parent_.isize() && node - minnode_ < parent_.jsize() ) {
          if ( parent_( node - minnode_ , node - minnode_ , 0 ) == node ) {
            // Correct this, add to the reset list, and follow on with the neighbors 
            reset_list_.push_back(node);
            parent_( node - minnode_ , node - minnode_ , 0 ) = parent;  
          }
        }
      }
    }

    void point::reset()
    {
      for (std::size_t i=0;i<reset_list_.size();i++) {
        std::size_t node = reset_list_[i];
        parent_( node - minnode_ , node - minnode_ , 0 ) = node;  
      }
      reset_list_.resize(0);
      reset_list_.reserve(size_est_);
    }

}}

