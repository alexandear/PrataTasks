project(Chapter_9)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)

add_executable( task_9_1 task_9_1.cpp golf.cpp )
add_executable( task_9_2 task_9_2.cpp )
add_executable( task_9_3 task_9_3.cpp )
add_executable( task_9_4 sales.cpp task_9_4.cpp )

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)
