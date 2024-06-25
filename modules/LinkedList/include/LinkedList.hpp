#ifndef __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#include <Node.hpp>

namespace my_linkedlist {

    class LinkedList {
    public:
        LinkedList();
        ~LinkedList();

        void emplace_back( int val );  // creates a node and appends to the end of the linked list

    private:
        Node * head;  // a pointer that points to the beginning of a linkedlist

        Node * createnode( int val );  // this function will create a node from heap memory
    };

}  // namespace my_linkedlist

#endif  //__LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__