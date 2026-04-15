get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION}_${PROJ_NAME})

add_subdirectory(src)
add_subdirectory(include)
