# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(MPG)
add_subdirectory(MPGEception)
add_subdirectory(MPGFunction)
add_subdirectory(MPGFunctionMultipleException)
add_subdirectory(StackUnwinding)
add_subdirectory(MPGFunctionExceptionClasses)
add_subdirectory(ConstructorException)
add_subdirectory(CodeChallenge)
