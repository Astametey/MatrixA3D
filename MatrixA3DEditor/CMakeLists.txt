cmake_minimum_required(VERSION 3.26.1 FATAL_ERROR)

set(EDITOR_PROJECT_NAME MatrixA3DEditor)

add_executable(${EDITOR_PROJECT_NAME}
        src/main.cpp
)

target_link_libraries(${EDITOR_PROJECT_NAME} MatrixA3DCore)



set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
