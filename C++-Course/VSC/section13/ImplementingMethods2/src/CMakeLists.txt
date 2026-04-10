set(EXE_SOURCES "main.cpp")
set(EXE_INCLUDE_DIR "../include")
set(EXE_INCLUDES "${EXE_INCLUDE_DIR}")

# Optional library sources in include/
file(GLOB LIB_SOURCES "${EXE_INCLUDE_DIR}/*.cpp" "${EXE_INCLUDE_DIR}/*.c")
if(LIB_SOURCES)
    set(LIB_NAME ${LIBRARY_NAME})
    string(APPEND LIB_NAME "_" ${SECTION})
    string(APPEND LIB_NAME "_" ${PROJ_NAME})

    add_library(${LIB_NAME} STATIC ${LIB_SOURCES})
    target_include_directories(${LIB_NAME} PUBLIC ${EXE_INCLUDE_DIR})
endif()

set(FULL_NAME ${EXECUTABLE_NAME})
string(APPEND FULL_NAME "_" ${SECTION})
string(APPEND FULL_NAME "_" ${PROJ_NAME})

add_executable(${FULL_NAME}
        ${EXE_SOURCES})
target_include_directories(${FULL_NAME} PRIVATE ${EXE_INCLUDE_DIR})

if(LIB_SOURCES)
    target_link_libraries(${FULL_NAME} PRIVATE ${LIB_NAME})
endif()

if(CPACK_SOURCE_CODE_STRUCTURE)
        # Automatisch alle .cpp und .c Dateien finden
        file(GLOB SRC_FILES "*.cpp" "*.c")
        if(SRC_FILES)
                install(FILES ${SRC_FILES}
                        DESTINATION ${PROJ_NAME}/src
                        COMPONENT ${SECTION}_${PROJ_NAME})
        endif()
else()
        install(TARGETS ${EXECUTABLE_NAME}_${SECTION}_${PROJ_NAME}
                DESTINATION bin
                COMPONENT ${SECTION}_${PROJ_NAME})
endif()