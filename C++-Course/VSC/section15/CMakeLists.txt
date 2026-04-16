# set(SECTION "section09")
get_filename_component(SECTION ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set_property(GLOBAL APPEND PROPERTY CPACK_COMPONENTS_ALL ${SECTION})


add_subdirectory(DerivingOurFirstClass)
add_subdirectory(ProtectedMembersClassAccess)
add_subdirectory(ConstructorsAndDestructors)
add_subdirectory(BaseClassInitialization)
add_subdirectory(CopyConstructorAndAssignmentOperator)
add_subdirectory(RedefiningBaseClassMethods)
add_subdirectory(CodeChallenge)
