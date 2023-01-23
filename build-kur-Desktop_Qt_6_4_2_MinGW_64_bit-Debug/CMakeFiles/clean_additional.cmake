# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\kur_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\kur_autogen.dir\\ParseCache.txt"
  "kur_autogen"
  )
endif()
