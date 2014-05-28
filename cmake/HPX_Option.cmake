# Copyright (c) 2011 Bryce Lelbach
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

# FIXME: Use parse arg.

macro(hpx_option option type description default)
#  hpx_info("option.${option}" "type:${type}")
#  hpx_info("option.${option}" "description:${description}")
#  hpx_info("option.${option}" "default:${default}")

  if(NOT DEFINED ${option})
    set(${option} ${default})
    set(${option} ${default} CACHE ${type} "${description}" FORCE)
  endif()

  foreach(arg ${ARGN})
    if(arg STREQUAL "ADVANCED")
      mark_as_advanced(FORCE ${option})
    else()
      hpx_error("Unknown argument while calling hpx_option: ${arg} (only allowed value: 'ADVANCED')")
    endif()
  endforeach()
endmacro()

