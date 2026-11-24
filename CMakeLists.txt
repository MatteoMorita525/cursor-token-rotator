cmake_minimum_required(VERSION 3.16)
project(cursor-token-rotator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cursortokenrotator
    src/main.cpp
    src/pool.cpp
    src/quota.cpp
    src/rotate.cpp
)

target_include_directories(cursortokenrotator PRIVATE include)

if(WIN32)
    target_link_libraries(cursortokenrotator PRIVATE userenv)
endif()
