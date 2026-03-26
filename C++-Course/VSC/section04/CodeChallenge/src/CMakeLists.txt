set(EXE_SOURCES "main.cpp")
set(EXE_INCLUDES "./")

set(FULL_NAME ${EXECUTABLE_NAME})
string(APPEND FULL_NAME "_" ${SECTION})
string(APPEND FULL_NAME "_" ${PROJ_NAME})

add_executable(${FULL_NAME}
        ${EXE_SOURCES})
