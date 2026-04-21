# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(FunctionTemplates)
add_subdirectory(ClassTemplates)
add_subdirectory(ClassTemplateArray)
add_subdirectory(Iterators)
add_subdirectory(Algorithms)
add_subdirectory(Array)
add_subdirectory(Vector)
add_subdirectory(Deque)
add_subdirectory(CodeChallenge01)
add_subdirectory(List)
add_subdirectory(CodeChallenge02)
add_subdirectory(Set)
