# set(SECTION section01)
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})

add_subdirectory(Project00_01)
add_subdirectory(Project00_02)
