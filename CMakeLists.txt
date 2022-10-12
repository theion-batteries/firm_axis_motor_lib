############################
###### Cmake template ######
############################

# author: sami dhiab
# email: sami@theion.de

cmake_minimum_required(VERSION 3.5.0)

# project name and version: change project name
project(axis_system VERSION "1.0")

# set the C++ standard: 20 is set
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#SET(MCU "atmega328p")
#SET(F_CPU "16000000")
SET(CMAKE_SYSTEM_NAME Generic)
# For some reason, these paths have to be absolute, otherwise
# CLion won't be able to find headers etc.
SET(CMAKE_C_COMPILER C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc)
SET(CMAKE_CXX_COMPILER C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++)

SET(CMAKE_C_FLAGS "-mmcu=${MCU} -DF_CPU=${F_CPU} -Os")
SET(CMAKE_C_LINK_FLAGS "-mmcu=${MCU}")

SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# add dependencies cmake
#add_subdirectory(dependencies/sockpp)
#add_subdirectory(dependencies/yaml-cpp)

# includes
include_directories(${PROJECT_SOURCE_DIR}/includes/)
# dependencies manual includes: change repo name
#include_directories(${PROJECT_SOURCE_DIR}/dependencies/sockpp/include/)
#include_directories(${PROJECT_SOURCE_DIR}/dependencies/yaml-cpp/include/)

# add all source *.cpp : change repo name
file(GLOB all_SRCS
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    )

# make the exec: change project name
add_executable(axis_system ${all_SRCS})

# link againt static libs
#target_link_libraries(axis_system ${PROJECT_SOURCE_DIR}/build/dependencies/yaml-cpp/Debug/yaml-cppd.lib
#)
#target_link_libraries(axis_system ${PROJECT_SOURCE_DIR}/build/dependencies/sockpp/Debug/sockpp-static.lib
#)
