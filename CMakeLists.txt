cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(ObjectPractice VERSION 1.0)

add_executable(${PROJECT_NAME} src/main.cpp src/window.cpp)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)