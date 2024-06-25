#include "Node.hpp"
#include <LinkedList.hpp>

namespace my_linkedlist {

    LinkedList::LinkedList() : head( nullptr ) {}

    LinkedList::~LinkedList() {}

    void LinkedList::emplace_back( int val ) {

        createnode( val );


    }

    Node * LinkedList::createnode( int val )
    {
        Node * pval;             // create a pointer to a node
        pval = new Node( val );  // construct a new Node on the heap and assign the address of this new Node to pval
        return pval;             // return the address of the newly constructed Node
    }

}  // namespace my_linkedlist
