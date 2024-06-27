#include <LinkedList.hpp>
#include <Node.hpp>
#include <iostream>

int main()
{
    my_linkedlist::LinkedList mylist;
    mylist.emplace_back( 3 );
    mylist.emplace_back( 4 );
    mylist.emplace_back( 5 );
    mylist.emplace_back( 6 );
    mylist.emplace_back( 7 );
    mylist.emplace_front(3);
    mylist.emplace_back( 8 );
    mylist.insert(1, 5);
    mylist.print_list();
    

    return 0;
}