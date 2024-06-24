project(LinkLists)

add_library(${PROJECT_NAME} 
	"include/LinkedList.hpp"
	"src/LinkedList.cpp"
	

)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)