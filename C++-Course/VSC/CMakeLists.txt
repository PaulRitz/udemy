cmake_minimum_required(VERSION 4.3.0)

project(UdemyCppCourse
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD              17)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)

set(EXECUTABLE_NAME executable)
set(LIBRARY_NAME library)

set(CPACK_SOURCE_CODE_STRUCTURE ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

include(Docs)

# SUBDIRECTORIES
add_subdirectory(section12)
add_subdirectory(section11)
add_subdirectory(section10)
add_subdirectory(section09)
add_subdirectory(section08)
add_subdirectory(section07)
add_subdirectory(section06)
add_subdirectory(section05)
add_subdirectory(section04)
add_subdirectory(section01)

# Installiere lokal im Build-Verzeichnis statt in /usr/local/
if(NOT CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    return()
endif()
set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "..." FORCE)

set(CPACK_MODE "full" CACHE STRING "Mode: 'full' oder 'challenges' oder 'custom'")

get_property(ALL_COMPONENTS GLOBAL PROPERTY CPACK_COMPONENTS_ALL)

foreach(component ${CPACK_COMPONENTS_ALL})
        string(REPLACE "_" " " component_display ${component})
        set(CPACK_COMPONENT_${component}_DISPLAY_NAME ${component_display})
endforeach(component ${CPACK_COMPONENTS_ALL})

if(CPACK_MODE STREQUAL "full")
        set(CPACK_COMPONENTS_ALL ${ALL_COMPONENTS})
        set(CPACK_ARCHIVE_COMPONENT_INSTALL OFF)
        message(STATUS "✅ CPack: Erstelle EINE ZIP mit ALLEN ${CMAKE_LIST_LENGTH} Projekten")
elseif(CPACK_MODE STREQUAL "challenges")
        set(CPACK_ARCHIVE_COMPONENT_INSTALL ON)
        set(FILTERED_COMPONENTS "")

        foreach(component ${ALL_COMPONENTS})
                if(component MATCHES "CodeChallenge|ProgrammingExercise")
                        list(APPEND FILTERED_COMPONENTS ${component})
                        message(STATUS "        ✓ ${component}")
                endif()
        endforeach()
        set(CPACK_COMPONENTS_ALL ${FILTERED_COMPONENTS})
        message(STATUS "✅ CPack: Erstelle separate ZIPs nur für Challenges/Exercises")
elseif(CPACK_MODE STREQUAL "custom")
        if(NOT CPACK_CUSTOM_COMPONENTS)
                message(FATAL_ERROR "❌ CPACK_MODE=custom aber CPACK_CUSTOM_COMPONENTS ist leer!")
        endif()
        set(CPACK_COMPONENTS_ALL ${CPACK_CUSTOM_COMPONENTS})
        set(CPACK_ARCHIVE_COMPONENT_INSTALL ON)
        message(STATUS "✅ CPack: Erstelle separate ZIPs für: ${CPACK_CUSTOM_COMPONENTS}")
else()
        message(FATAL_ERROR "❌ Unbekanner CPACK_MODE: '${CPACK_MODE}'. Nutze 'full' oder 'challenges'!")
endif()
# set(CPACK_COMPONENTS_ALL ${ALL_COMPONENTS})

set(CPACK_PACKAGE_NAME "Udemy_Cpp_Course")
set(CPACK_PACKAGE_VENDOR "Kärcher")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

set(CPACK_GENERATOR "ZIP")

# set(CPACK_ARCHIVE_COMPONENT_INSTALL OFF)

# set(CPACK_COMPONENTS_ALL)

include(CPack)

# 1. Targets für JEDES PROJEKT (nur Komponenten mit Underscore!)
foreach(component ${ALL_COMPONENTS})
    # Filtere NUR Komponenten mit Underscore (sind Projekte, nicht Sektionen)
    if(component MATCHES "_")
        add_custom_target(pack_${component}
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
            COMMAND cpack -C Debug -D CPACK_COMPONENTS_ALL=${component} -D CPACK_ARCHIVE_COMPONENT_INSTALL=ON
            COMMENT "📦 Packe Projekt: ${component}"
        )
    endif()
endforeach()

# 2. Targets für JEDE SEKTION
foreach(
        # SECTION-INSTALL-TARGETS 
 	section12
 	section12
        section11
        section10
        section09 
        section08 
        section07 
        section06 
        section05 
        section04 
        section01 
        section) 
    # Sammle alle Komponenten dieser Sektion
    set(SECTION_COMPONENTS "")
    foreach(component ${ALL_COMPONENTS})
        if(component MATCHES "^${section}_")
            list(APPEND SECTION_COMPONENTS ${component})
        endif()
    endforeach()
    
    if(SECTION_COMPONENTS)
        # Konvertiere Liste zu semicolon-separated String
        string(REPLACE ";" "\\;" COMPONENTS_STR "${SECTION_COMPONENTS}")
        add_custom_target(pack_${section}
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
            COMMAND cpack -C Debug -D CPACK_COMPONENTS_ALL="${COMPONENTS_STR}" -D CPACK_ARCHIVE_COMPONENT_INSTALL=ON
            COMMENT "📦 Packe Sektion: ${section}"
        )
    endif()
endforeach()