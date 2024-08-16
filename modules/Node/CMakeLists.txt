project(iNode)

add_library(${PROJECT_NAME} 
	"include/iNode.hpp"
	"include/DoublyNode.hpp"
	"include/Node.hpp"

	"src/DoublyNode.cpp"
	"src/Node.cpp"
)


target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)