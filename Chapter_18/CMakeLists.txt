project(Chapter_18)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. APP_SOURCES)

foreach( appsourcefile ${APP_SOURCES} )
    string( REPLACE ".cpp" "" testname ${appsourcefile} )
    add_executable( ${testname} ${appsourcefile} )
endforeach( appsourcefile ${APP_SOURCES} )

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)
