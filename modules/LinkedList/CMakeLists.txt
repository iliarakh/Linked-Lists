project(iLinkedList)

add_library(${PROJECT_NAME} 
	"include/iLinkedList.hpp"
	"include/Doubly_LinkedList.hpp"
	"include/Singly_LinkedList.hpp"

	"src/Doubly_LinkedList.cpp"
	"src/Singly_LinkedList.cpp"
)

target_link_libraries(${PROJECT_NAME} iNode)


target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)