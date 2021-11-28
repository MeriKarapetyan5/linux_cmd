cmake_minimum_required(VERSION 3.10)
project(rm)
add_executable(rm rm.c)
install(TARGETS rm DESTINATION "/home/meri/Codes/Linux_cmd/bin")
