cmake_minimum_required(VERSION 3.26.1 FATAL_ERROR)

set(PROJECT_NAME MatrixA3D)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(MatrixA3DCore)
add_subdirectory(MatrixA3DEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT MatrixA3DEditor)



