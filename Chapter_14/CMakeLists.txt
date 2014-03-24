project(Chapter_14)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)

add_executable( task_14_1 task_14_1.cpp winec.cpp )
add_executable( task_14_2 task_14_2.cpp winei.cpp )
add_executable( task_14_3 task_14_3.cpp workermi.cpp )
add_executable( task_14_4 task_14_4.cpp personmi.cpp )
add_executable( task_14_5 task_14_5.cpp emp.cpp )

add_definitions(-std=c++11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
