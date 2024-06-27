#ifndef __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#include <Node.hpp>

namespace my_linkedlist {

    class LinkedList {
    public:
        LinkedList();
        ~LinkedList();

        void emplace_front( int val );

        void emplace_back( int val );  // creates a node and appends to the end of the linked list

        void print_list();

    private:
        Node * head;  // a pointer that points to the beginning of a linkedlist

        static Node * createnode( int val );  // this function will create a node from heap memory

        // this function recursively deletes all of the nodes from this node forward
        static void delete_list_r( Node * local_head );

        // this function iteratively deletes all of the nodes from this node forward
        static void delete_list_i( Node * local_head );
    };

}  // namespace my_linkedlist

#endif  //__LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__