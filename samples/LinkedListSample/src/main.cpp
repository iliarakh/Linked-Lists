#include "Singly_LinkedList.hpp"
#include <iostream>

int main()
{
    my_linkedlist::Singly_LinkedList list;

    // Use emplace_front to add elements at the front
    std::cout << "Adding 1, then 2,then  3 to the front of the list.\n";
    list.emplace_front( 23 );
    list.emplace_front( 1 );
    list.emplace_front( 10 );
    list.emplace_front( 5 );
    std::cout << "List after emplace_front operations: ";
    list.print_list();

    // Use emplace_back to add elements at the back
    std::cout << "Adding 4, 5 to the back of the list.\n";
    list.emplace_back( 2 );
    list.emplace_back( 1 );
    list.emplace_back( 3);
    std::cout << "List after emplace_back operations: ";
    list.print_list();

    list.insertsort();
    std::cout << "List after insert_sort operation: ";
    list.print_list();

    return 0;
}
