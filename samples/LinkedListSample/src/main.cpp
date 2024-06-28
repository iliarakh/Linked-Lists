#include "LinkedList.hpp"
#include <iostream>
#include <ostream>

int main() {
    my_linkedlist::LinkedList list;

    // uses emplace_front to add elements at the front
    list.emplace_front(1);
    list.emplace_front(2);
    list.emplace_front(3);
    std::cout << "List after emplace_front operations: " << std::endl; 
    list.print_list();

    // uses emplace_back to add elements at the back
    list.emplace_back(4);
    list.emplace_back(5);
    std::cout << "List after emplace_back operations: " << std::endl;
    list.print_list();

    // uses insert to add elements at a specific position
    list.insert(2, 6);  // Insert 6 at position 2
    std::cout << "List after insert operation: " << std::endl;
    list.print_list();

    return 0;
}
