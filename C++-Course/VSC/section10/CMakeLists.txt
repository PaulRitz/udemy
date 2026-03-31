# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(CStyleStrings)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(CppStrings)
add_subdirectory(ProgrammingExercise02)
add_subdirectory(CodeChallenge)
add_subdirectory(LetterPyramid)
