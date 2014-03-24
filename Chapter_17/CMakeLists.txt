project(Chapter_17)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)

add_executable( task_17_1 task_17_1.cpp )
add_executable( task_17_2 task_17_2.cpp )
add_executable( task_17_3 task_17_3.cpp )
add_executable( task_17_4 task_17_4.cpp )
add_executable( task_17_5 task_17_5.cpp )
add_executable( task_17_6 task_17_6.cpp emp.cpp )
add_executable( task_17_7 task_17_7.cpp )

add_definitions(-std=c++11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
