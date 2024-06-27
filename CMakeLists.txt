cmake_minimum_required(VERSION 3.15)

project(JuegoRicdee)

add_executable(JuegoRicdee "src/main.cpp")

target_include_directories(JuegoRicdee PRIVATE "include")

target_compile_features(JuegoRicdee PRIVATE cxx_std_17)

include("CMake/get_cpm.cmake")