cmake_minimum_required(VERSION 3.10)

project(hello-c LANGUAGES C)

add_executable(hello-c src/main.c)
target_link_libraries(hello-c m)

install(TARGETS hello-c RUNTIME DESTINATION bin)
