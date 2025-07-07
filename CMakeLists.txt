cmake_minimum_required(VERSION 3.5.1)
project(StreamingApp VERSION  0.1.0 LANGUAGES C CXX)


include(CTest)
enable_testing() 

add_executable(StreamingApp main.cpp)

set_property(TARGET StreamingApp PROPERTY CXX_STANDARD 17)

