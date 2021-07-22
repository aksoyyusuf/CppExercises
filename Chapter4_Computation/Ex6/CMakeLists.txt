get_filename_component(exercise ${CMAKE_CURRENT_SOURCE_DIR} NAME)

cmake_minimum_required(VERSION 3.5.1)

project(${exercise} CXX)

add_executable(${exercise} 
    ${exercise}.cpp 
    ${exercise}.h 
    main.cpp
)

set_target_properties(${exercise} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED OFF
    CXX_EXTENSIONS OFF
)

set(CMAKE_BUILD_TYPE Debug)
