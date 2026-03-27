# set(SECTION "section04")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

add_subdirectory(CodeChallenge)
add_subdirectory(CompilerWarnings)
add_subdirectory(FirstProgram)
add_subdirectory(LinkerErrors)
add_subdirectory(RuntimeErrors)
