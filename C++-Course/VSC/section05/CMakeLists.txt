# set(SECTION "section05")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(SECTION ${SECTION} PARENT_SCOPE)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})

add_subdirectory(BasicIO)
add_subdirectory(Comments)
add_subdirectory(ModifiedProgram)
add_subdirectory(ProgrammingExercise01)