cmake_minimum_required(VERSION 3.8)
project(ManySort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp InsertSort.h ShellSort.h SelectSort.h HeapSort.h)
add_executable(ManySort ${SOURCE_FILES} InsertSort.h ShellSort.h SelectSort.h HeapSort.h)