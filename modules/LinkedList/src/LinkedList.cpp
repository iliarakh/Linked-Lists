#include "Node.hpp"
#include <LinkedList.hpp>

namespace my_linkedlist {

    LinkedList::LinkedList() : head( nullptr ) {}

    void LinkedList::emplace_back( int val )
    {
        Node * new_node = createnode( val );
        std::cout << new_node << "\n";

        if ( head == nullptr ) {
            head = new_node;
        } else {
            Node * placeholder = head;
            while ( placeholder->next_node() != nullptr ) {
                placeholder = placeholder->next_node();
            }
            placeholder->link(new_node);
        }
    }

    // creates a node on the heap with value `val` and returns the address of it
    Node * LinkedList::createnode( int val )
    {
        Node * pval;             // create a pointer to a node
        pval = new Node( val );  // construct a new Node on the heap and assign the address of this new Node to pval
        return pval;             // return the address of the newly constructed Node
    }

    LinkedList::~LinkedList() {}

}  // namespace my_linkedlist
