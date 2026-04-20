# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(ManipBoolean)
add_subdirectory(ManipInteger)
add_subdirectory(ManipFloat)
add_subdirectory(ManipFields)
add_subdirectory(CodeChallenge1)
add_subdirectory(ReadFile01)
