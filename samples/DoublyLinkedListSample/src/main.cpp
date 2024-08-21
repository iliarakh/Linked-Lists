#include <DoublyNode.hpp>
#include <Doubly_LinkedList.hpp>
#include <LinkedList.hpp>
#include <Node.hpp>
#include <iostream>


int main() {

my_linkedlist::Doubly_LinkedList Doublylist;

    // Use emplace_front to add elements at the front
    Doublylist.emplace_front( 23 );
    Doublylist.emplace_front( 1 );
    Doublylist.emplace_front( 10 );
    Doublylist.emplace_front( 5 );
    std::cout << "List after emplace_front operations: ";
    Doublylist.print_list();

    // Use emplace_back to add elements at the back
    Doublylist.emplace_back( 2 );
    Doublylist.emplace_back( 1 );
    Doublylist.emplace_back( 3);
    std::cout << "List after emplace_back operations: ";
    Doublylist.print_list();

    return 0;



}