# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(DeclareClassAndObjects)
add_subdirectory(AccessingClassMembers)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(AccessModifiers)
add_subdirectory(ImplementingMethods1)
add_subdirectory(ImplementingMethods2)
add_subdirectory(ProgrammingExercise02)
add_subdirectory(ConstructorsAndDestructors)
