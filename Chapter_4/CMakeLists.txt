project(Chapter_4)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)

foreach( appsourcefile ${APP_SOURCES} )
    string( REPLACE ".cpp" "" testname ${appsourcefile} )
    add_executable( ${testname} ${appsourcefile} )
endforeach( appsourcefile ${APP_SOURCES} )

add_definitions(-std=c++11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
