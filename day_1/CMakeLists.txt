cmake_minimum_required(VERSION 3.16)
project(CppSystemsLab LANGUAGES CXX)

add_executable(MyApp helloWorld.cpp)

target_compile_features(MyApp PRIVATE cxx_std_23)
set_property(TARGET MyApp PROPERTY CXX_EXTENSIONS OFF)
