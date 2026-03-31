set(EXE_SOURCES "main.cpp")
set(EXE_INCLUDES "./")

set(FULL_NAME ${EXECUTABLE_NAME})
string(APPEND FULL_NAME "_" ${SECTION})
string(APPEND FULL_NAME "_" ${PROJ_NAME})

add_executable(${FULL_NAME}
        ${EXE_SOURCES})


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