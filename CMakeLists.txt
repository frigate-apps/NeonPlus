cmake_minimum_required(VERSION 3.6.0)
project(NeonPlus)

# 设置C++标准 (C++17)
set(CMAKE_CXX_STANDARD 17)

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src
)
file(GLOB SRCS
	"include/*"
	"include/Lexer/*"
	"include/Token/*"
	"include/Parser/*"
	"include/Node/*"
	
	"src/*"
	"src/Lexer/*"
	"src/Token/*"
	"src/Parser/*"
	main.cpp
)
add_executable(NeonPlus ${SRCS})
