cmake_minimum_required(VERSION 3.10)
project(rm)
add_executable(rm rm.c)
install(TARGETS rm DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/bin")
