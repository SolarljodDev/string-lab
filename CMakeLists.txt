cmake_minimum_required(VERSION 3.10)
project(string_master)

add_executable(app 
	main.c 
	src/str_utils.c
)

target_include_directories(app PRIVATE include)
