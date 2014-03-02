project(Chapter_15)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)
add_custom_target(exc_mean_2 SOURCES exc_mean_2.h)
add_custom_target(exc_mean_3 SOURCES exc_mean_3.h)

add_executable( task_15_1 task_15_1.cpp tv.cpp )
add_executable( task_15_2 task_15_2.cpp )
add_executable( task_15_3 task_15_3.cpp )
add_executable( task_15_4 task_15_4.cpp sales.cpp )


ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)
