#ifndef __LINKED_LIST__MY_LINKEDLIST__DOUBLY__NODE__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__DOUBLY__NODE__HPP__

#include <iNode.hpp>

class DoublyNode : iNode {
public:
    DoublyNode( int val );

    DoublyNode * next();

    DoublyNode * last();

private:
    int          data;
    DoublyNode * head;
    DoublyNode * tail;
};

#endif