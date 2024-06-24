#ifndef __LINKED_LIST__MY_LINKEDLIST__NODE__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__NODE__HPP__

class Node {
public:
    // Constructor that takes an integer and initializes 'val'
    Node( int val );

    // Constructor that takes a Node pointer and an integer, and initializes both fields
    Node( Node * next, int val );

    // Function that links this Node to another Node
    void link( Node * node );

private:
    int    val;   // This is the data the node stores, this theoretically could be anything
    Node * next;  // this is connector to the next element
};

#endif  // __LINKED_LIST__MY_LINKEDLIST__NODE__HPP__
