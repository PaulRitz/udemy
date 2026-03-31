# set(SECTION "section06")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(SECTION ${SECTION} PARENT_SCOPE)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})

add_subdirectory(CodeChallenge)
add_subdirectory(Constants)
add_subdirectory(GlobalVariables)
add_subdirectory(InitializingVariables)
add_subdirectory(PrimitiveTypes)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(SizeofOperator)