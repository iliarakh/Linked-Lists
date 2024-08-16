project(JaggedArraySample)

add_executable( ${PROJECT_NAME} 
	src/jagged_arrays.cpp
)

target_link_libraries(${PROJECT_NAME} iLinkedList iNode)
