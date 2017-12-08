cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)
include(cmake/HunterGate.cmake)
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.19.52.tar.gz"
    SHA1 "6d3a8135ba62726d810fd8c8c7d97980fa6c3b4a"
)
project(helloworld)
add_executable(helloworld ${CMAKE_CURRENT_SOURCE_DIR}/helloworld.cpp)
install(TARGETS helloworld RUNTIME DESTINATION bin)
