#ifndef __LINKED_LIST__MY_LINKEDLIST__DOUBLY__NODE__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__DOUBLY__NODE__HPP__

#include <iNode.hpp>
#include <Node.hpp>

class DoublyNode : iNode {
public:
     DoublyNode(int val);

    DoublyNode * next();
    DoublyNode * prev();

    void set_next(DoublyNode* next);
    void set_prev(DoublyNode* prev);

    int getVal() const;


private:
    int          data;
    DoublyNode * _next;
    DoublyNode * _prev;
};

#endif