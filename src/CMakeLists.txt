cmake_minimum_required(VERSION 3.26)
project(PAOO_Tema_II)

set(CMAKE_CXX_STANDARD 17)

add_executable(PAOO_Tema_II  main.cpp)

add_subdirectory(Subject)
add_subdirectory(Person)

# Link the library from the subdirectory with the main executable
target_link_libraries(PAOO_Tema_II SubjectLibrary PersonLibrary)

target_include_directories(PAOO_Tema_II PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/Person"
        "${PROJECT_SOURCE_DIR}/Subject"
)