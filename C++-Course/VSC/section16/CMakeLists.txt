# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(TheProblem)
add_subdirectory(VirtualFunctions)
add_subdirectory(VirtualDestructors)
add_subdirectory(UsingOverride)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(ProgrammingExercise02)
add_subdirectory(BaseClassReferences)
add_subdirectory(PureVirtualFunctions)
add_subdirectory(InterfacesStart)
add_subdirectory(InterfacesComplete)
add_subdirectory(CodeChallenge)
