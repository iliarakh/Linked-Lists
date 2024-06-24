#ifndef __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#include <Node.hpp>

namespace my_linkedlist {

    class LinkedList {
    public:
        LinkedList();
        ~LinkedList();

        void emplace_back( int val );

    private:
        Node * head;
    };

}  // namespace my_linkedlist

#endif  //__LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__