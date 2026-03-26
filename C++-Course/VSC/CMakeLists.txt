cmake_minimum_required(VERSION 4.3.0)

project(UdemyCppCourse
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD              17)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)

set(EXECUTABLE_NAME executable)
set(LIBRARY_NAME library)

add_subdirectory(section01)
add_subdirectory(section04)
add_subdirectory(section05)
add_subdirectory(section06)
add_subdirectory(section07)
add_subdirectory(section08)
add_subdirectory(section09)