# @file CMakeLists.txt
# 
# CMake files for the cohesion project

cmake_minimum_required(VERSION 3.28)

# project
project(cohesion)

# cohesion application
add_executable(cohesion)

# cohesion sources
target_sources(cohesion PRIVATE Cohesion.cpp)
target_compile_features(cohesion PRIVATE cxx_std_17)
set_target_properties(cohesion PROPERTIES
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
# warnings
target_compile_options(cohesion PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>: -Wall -Wno-unused-variable>
     $<$<CXX_COMPILER_ID:MSVC>: /W4>
)

# run
add_custom_target(run
        COMMENT "Run"
        COMMAND $<TARGET_FILE:cohesion>
        DEPENDS cohesion
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
