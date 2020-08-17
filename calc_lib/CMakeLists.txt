add_library(calc_lib
            src/add.cpp
            src/multiply.cpp)

target_include_directories(calc_lib PUBLIC include)

#target_include_directories(calc_lib PUBLIC 
#$<INSTALL_INTERFACE:include>
#$<BUILD_INTERFACE:${CMAKE_CURRENT_COURCE_DIR}/include>)

#install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/calc_lib/add.h
#              ${CMAKE_CURRENT_SOURCE_DIR}/include/calc_lib/multiply.h
#               DESTINATION ${CMAKE_INSTALL_PREFIX}/include/calc_lib)

#install(TARGETS calc_lib EXPORT my_calclib DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/calc_lib)

#install(EXPORT my_calclib FILE calc_lib-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/calc_lib)