# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(MyStringStart)
add_subdirectory(MyStringCopyAssignement)
add_subdirectory(MyStringMoveAssignment)
add_subdirectory(MyStringOperatorMethods)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(MyStringOperatorFunctions)
add_subdirectory(ProgrammingExercise02)
add_subdirectory(MyStringInsertionExtraction)
add_subdirectory(ProgrammingExercise03)
add_subdirectory(CodeChallengev1)
add_subdirectory(CodeChallengev2)
