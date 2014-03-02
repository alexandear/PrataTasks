project(Chapter_12)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
add_executable(task_12_1 task_12_1.cpp cow.cpp)
add_executable(task_12_2 task_12_2.cpp string2.cpp)
add_executable(task_12_3 task_12_3.cpp stock3.cpp)
add_executable(task_12_4 task_12_4.cpp stack.cpp)
add_executable(task_12_5 task_12_5.cpp queue.cpp)
add_executable(task_12_6 task_12_6.cpp queue.cpp)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)
