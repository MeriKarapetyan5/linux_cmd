cmake_minimum_required(VERSION 3.10)
project(file_manager)
add_executable(file_manager file_manager.c)
install(TARGETS file_manager DESTINATION "$CMAKE_SOURCE_DIR/bin")
