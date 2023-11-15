set(HEADERS
        PersonArray.h
)

set(SOURCES
        PersonArray.cpp
)

add_library(PersonManagerLibrary ${SOURCES} ${HEADERS})
target_include_directories(PersonLibrary PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${PROJECT_SOURCE_DIR}/PersonManager"
)

target_compile_features(PersonManagerLibrary PUBLIC cxx_std_17)