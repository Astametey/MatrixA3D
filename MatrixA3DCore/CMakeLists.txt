cmake_minimum_required(VERSION 3.26.1 FATAL_ERROR)

set(ENGINE_PROJECT_NAME MatrixA3DCore)

add_library(${ENGINE_PROJECT_NAME} STATIC 
	src/MatrixA3DCore/Utils/test.cpp
	includes/MatrixA3DCore/Utils/test.hpp
)

target_include_directories (${ENGINE_PROJECT_NAME} PUBLIC includes)