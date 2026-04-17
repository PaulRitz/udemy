# Installiere Header-Dateien automatisch
file(GLOB HEADER_FILES "*.h" "*.hpp")

if(HEADER_FILES)
    install(FILES ${HEADER_FILES}
            DESTINATION ${PROJ_NAME}/include
            COMPONENT ${SECTION}_${PROJ_NAME})
endif()
