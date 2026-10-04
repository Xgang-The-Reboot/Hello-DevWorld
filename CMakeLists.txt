cmake_minimum_required(VERSION 3.10)

project(hello-c LANGUAGES C)

add_executable(hello-c main.c)

install(TARGETS hello-c RUNTIME DESTINATION bin)
