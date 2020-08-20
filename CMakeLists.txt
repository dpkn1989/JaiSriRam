cmake_minimum_required(VERSION 3.12.3)

project(JaiSriRam_Project VERSION 1.1.1)

message("JaiSriRam Project build started!")
message("CMake Process Started")

set(CMAKE_BUILD_TYPE Debug)

set(CALC_LIB calc_lib)
set(PRINT_LIB print_lib)

set(EXEC JaiSriRam)

#add_subdirectory(${CALC_LIB})
add_subdirectory(${PRINT_LIB})

find_package(calc_lib)

add_executable(${EXEC} 
               main/main.cpp)

target_link_libraries(${EXEC}
                      ${CALC_LIB}
                      ${PRINT_LIB})

