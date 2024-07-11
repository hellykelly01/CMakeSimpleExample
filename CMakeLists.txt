cmake_minimum_required(VERSION 3.11)

project(mmmmm)

find_package(Boost REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ${Boost_INCLUDE_DIRS})

target_link_libraries(main ${Boost_LIBRARIES})