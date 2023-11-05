set(HEADERS
        ISubject.h
        Subject.h
        Biology.h
        Chemistry.h
        ExtracurricularSubject.h
)

set(SOURCES
        Biology.cpp
        Chemistry.cpp
        Subject.cpp
        ExtracurricularSubject.cpp
)

add_library(SubjectLibrary ${SOURCES} ${HEADERS})
target_include_directories(SubjectLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(SubjectLibrary PUBLIC cxx_std_17)
