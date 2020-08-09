#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "calc_lib" for configuration "Debug"
set_property(TARGET calc_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(calc_lib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "/usr/local/lib/calc_lib/libcalc_lib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS calc_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_calc_lib "/usr/local/lib/calc_lib/libcalc_lib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
