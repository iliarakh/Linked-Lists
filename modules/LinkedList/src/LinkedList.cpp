#include "Node.hpp"
#include <LinkedList.hpp>
#include <cstddef>
#include <ratio>

namespace my_linkedlist {

    LinkedList::LinkedList() : head( nullptr ) {}

    void LinkedList::insert_sort( int val )
    {
        Node * new_node = createnode( val );  

        
        if ( head == nullptr || head->getVal() >= new_node->getVal() ) {
            new_node->link( head );
            head = new_node;
        }
        else {
            
            Node * current = head;
            while ( current->next_node() != nullptr && current->next_node()->getVal() < new_node->getVal() ) {
                current = current->next_node();
            }
            new_node->link( current->next_node() );
            current->link( new_node );
        }
    }

    void LinkedList::emplace_front( int val )
    {
        Node * new_node = createnode( val );  // creates a new node with the given value

        if ( head == nullptr ) {  // if the list is empty
            head = new_node;      // set the new node as the head
        }
        else {                       // if the list is not empty
            new_node->link( head );  // link the new node to the current head
            head = new_node;         // set the new node as the new head
        }
    }

    void LinkedList::emplace_back( int val )
    {
        Node * new_node = createnode( val );
        if ( head == nullptr ) {  // checks if head is a null pointer is true
            head = new_node;      // if it is then head gets set to new node
            return;
        }

        // if statment is not true placeholder gets the
        // memory address of node and that is equal to head
        Node * placeholder = head;
        // while placeholder is not equal to null pointer function continues
        while ( placeholder->next_node() != nullptr ) {
            placeholder = placeholder->next_node();  // placeholder = next element
        }
        placeholder->link( new_node );  // once it is finished set the createnode value as the tail
    }

    // creates a node on the heap with value `val` and returns the address of it
    Node * LinkedList::createnode( int val )
    {
        Node * pval;             // create a pointer to a node
        pval = new Node( val );  // construct a new Node on the heap and assign the address of this new Node to pval
        return pval;             // return the address of the newly constructed Node
    }

    // this function deletes all of the nodes in the list headed by `local_head`
    void LinkedList::delete_list_r( Node * local_head )
    {
        if ( local_head == nullptr ) {  // trivial case (error checking) (there is no list to delete)
            return;
        }

        if ( local_head->next_node() != nullptr ) {  // recursive step
            delete_list_r( local_head->next_node() );
        }

        std::cout << "Deleteing: " << local_head << "\n";
        delete local_head;  // base case
    }

    void LinkedList::delete_list_i( Node * local_head )
    {
        while ( local_head != nullptr ) {
            Node * placeholder = local_head;
            local_head         = local_head->next_node();
            delete placeholder;
        }
    }

    void LinkedList::print_list()
    {
        Node * current = head;              // declares a pointer current of type Node and initializes it to head
        while ( current != nullptr ) {      // while current is not equal to nullptr the loops iterates
            std::cout << *current << ", ";  // prints out the current value (int of node) and ends line
            // updates "current" to be the value of next_node() and itterates through the loop again until "current"
            // points to NULL and then stops the while loop
            current = current->next_node();
        }
        std::cout << "\n";
    }

    void LinkedList::insert( int pos, int val )  // function insert with constructs pos and val
    {
        if ( pos == 0 ) {  // if pos =0 meaning its the head node call emplace front function
            emplace_front( val );
            return;
        }

        Node * current = head;                 // initialize head with current
        for ( int i = 0; i < pos - 1; i++ ) {  // loop until we are directly behind the target node
            if ( current == nullptr ) {        // check if we are still in bounds
                return;
            }
            current = current->next_node();  // set current to the node ahead until we are one position before we
                                             // need to insert
        }

        if ( current == nullptr ) {  // check bounds
            return;
        }

        Node * insert_node = createnode( val );     // create our node for insertion
        insert_node->link( current->next_node() );  // link the insert node to the node ahead
        current->link( insert_node );               // link the node before to the inserted node
    }

    LinkedList::~LinkedList()
    {
        delete_list_r( head );
        head = nullptr;
    }
}  // namespace my_linkedlist