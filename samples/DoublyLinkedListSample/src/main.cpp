#include <DoublyNode.hpp>
#include <Doubly_LinkedList.hpp>
#include <Singly_LinkedList.hpp>
#include <Node.hpp>
#include <iostream>


int main() {

my_linkedlist::Doubly_LinkedList Doublylist;

    

    // Use emplace_back to add elements at the back
    // Use emplace back to show how memory adresses are created and to demonstrate how destructor "delete_list_backwards(); works
    Doublylist.emplace_back( 2 );
    Doublylist.emplace_back( 6 );
    Doublylist.emplace_back( 7 );
    Doublylist.emplace_back( 10 );
    Doublylist.emplace_back( 23 );
    Doublylist.emplace_back( 1 );
    Doublylist.emplace_back( 3);
    std::cout << "List after emplace_back operations: ";
    Doublylist.print_list();

    return 0;



}