cmake_minimum_required(VERSION 3.25)

project(cava)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
  src/main.cpp
  src/cava.cpp

  src/cava.h
)

add_executable(cava ${SOURCES})
