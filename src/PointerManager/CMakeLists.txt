set(HEADERS
        Counter.h
        Shared_ptr.h
)

set(SOURCES
        Counter.cpp
        Shared_ptr.cpp
)

add_library(PointerManagerLibrary ${SOURCES} ${HEADERS})
target_include_directories(PointerManagerLibrary PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        "${PROJECT_SOURCE_DIR}/PointerManager"
)

target_compile_features(PersonLibrary PUBLIC cxx_std_17)