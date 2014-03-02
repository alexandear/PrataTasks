project(Chapter_13)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
add_executable(task_13_1 task_13_1 cd.cpp classic.cpp)
add_executable(task_13_2 task_13_2 cd2.cpp classic2.cpp)
add_executable(task_13_3 task_13_3 dma.cpp)
add_executable(task_13_4 task_13_4 port.cpp vintageport.cpp)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)
