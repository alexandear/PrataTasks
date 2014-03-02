project(Chapter_11)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
add_executable(task_11_1 task_11_1 vect.cpp)
add_executable(task_11_2 task_11_2 vect2.cpp)
add_executable(task_11_3 task_11_3 vect.cpp)
add_executable(task_11_4 task_11_4 mytime3.cpp)
add_executable(task_11_5 task_11_5 stonewt.cpp)
add_executable(task_11_6 task_11_6 stonewt6.cpp)
add_executable(task_11_7 task_11_7 complex0.cpp)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)

