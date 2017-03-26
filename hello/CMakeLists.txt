cmake_minimum_required(VERSION 3.6)
project(hello)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)
set(SOURCE_FILES hello.cpp)
add_executable(hello ${SOURCE_FILES})
target_link_libraries(hello ${OpenCV_LIBS})