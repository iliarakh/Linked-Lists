#include "LinkedList.hpp"
#include <iostream>

int main()
{
    my_linkedlist::LinkedList list;

    // Use emplace_front to add elements at the front
    std::cout << "Adding 1, then 2,then  3 to the front of the list.\n";
    list.emplace_front( 1 );
    list.emplace_front( 2 );
    list.emplace_front( 3 );
    std::cout << "List after emplace_front operations: ";
    list.print_list();

    // Use emplace_back to add elements at the back
    std::cout << "Adding 4, 5 to the back of the list.\n";
    list.emplace_back( 4 );
    list.emplace_back( 5 );
    std::cout << "List after emplace_back operations: ";
    list.print_list();

    std::cout << "Inserting numbers in sorted order.\n";
    list.insert_sort( 7 );
    list.insert_sort( 3 );
    list.insert_sort( 1 );
    std::cout << "List after insert_sort operation: ";
    list.print_list();

    return 0;
}
