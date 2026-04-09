# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(ArraysAndPointers)
add_subdirectory(PointerArithmetic)
add_subdirectory(ProgrammingExercise01)
add_subdirectory(PassingPointers1)
add_subdirectory(PassingPointers2)
add_subdirectory(PassingPointers3)
add_subdirectory(ReturnPointer)
add_subdirectory(ProgrammingExercise02)
add_subdirectory(References)
add_subdirectory(Debugger)
add_subdirectory(CodeChallenge)
