# set(SECTION "section04")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(SECTION ${SECTION} PARENT_SCOPE)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})

add_subdirectory(CodeChallenge)
add_subdirectory(CompilerWarnings)
add_subdirectory(FirstProgram)
add_subdirectory(LinkerErrors)
add_subdirectory(RuntimeErrors)
