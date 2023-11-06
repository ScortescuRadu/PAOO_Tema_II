set(HEADERS
        IPerson.h
        Person.h
        Student.h
        Teacher.h
)

set(SOURCES
        Person.cpp
        Student.cpp
        Teacher.cpp
)

add_library(PersonLibrary ${SOURCES} ${HEADERS})
target_include_directories(PersonLibrary PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${PROJECT_SOURCE_DIR}/Subject"
)

target_compile_features(PersonLibrary PUBLIC cxx_std_17)
