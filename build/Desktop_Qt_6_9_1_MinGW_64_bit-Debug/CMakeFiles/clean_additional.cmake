# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BuildServer_autogen"
  "CMakeFiles\\BuildServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BuildServer_autogen.dir\\ParseCache.txt"
  )
endif()
