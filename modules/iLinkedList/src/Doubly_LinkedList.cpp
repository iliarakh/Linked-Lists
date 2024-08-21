#include <DoublyNode.hpp>
#include <Doubly_LinkedList.hpp>
#include <Node.hpp>
#include <cstddef>
#include <iLinkedList.hpp>

namespace my_linkedlist {

    Doubly_LinkedList::Doubly_LinkedList() : head( nullptr ), tail( nullptr ) {}

    DoublyNode * Doubly_LinkedList::createnode( int val ) { return new DoublyNode( val ); }

    void Doubly_LinkedList::emplace_front( int val )
    {
        DoublyNode * new_node = createnode( val );
        if ( head == nullptr ) {
            head = new_node;
            tail = new_node;
            std::cout << "creating: " << new_node << "\n";
        }
        else {
            new_node->set_next( head );
            head->set_prev( new_node );
            head = new_node;
            std::cout << "creating: " << new_node << "\n";
        }
    }

    void Doubly_LinkedList::emplace_back( int val )
    {
        DoublyNode * new_node = createnode( val );
        if ( tail == nullptr ) {
            head = new_node;
            tail = new_node;
            std::cout << "creating: " << new_node << "\n";
        }
        else {
            tail->set_next( new_node );
            new_node->set_prev( tail );
            tail = new_node;
            std::cout << "creating: " << new_node << "\n";
        }
    }

    void Doubly_LinkedList::print_list() const
    {
        DoublyNode * current = head;
        while ( current != nullptr ) {
            std::cout << current->getVal() << ", ";
            current = current->next();
        }
        std::cout << "\n";
    }

    void Doubly_LinkedList::insert( int pos, int val )
    {
        if ( pos == 0 ) {  // If pos = 0, meaning it's the head node, call emplace_front function
            emplace_front( val );
            return;
        }

        DoublyNode * current = head;           // Initialize head with current
        for ( int i = 0; i < pos - 1; i++ ) {  // Loop until we are directly behind the target node
            if ( current == nullptr ) {        // Check if we are still in bounds
                return;
            }
            current = current->next();  // Move current to the node ahead until we are one position before the
                                        // insert position
        }

        if ( current == nullptr || current->next() == nullptr ) {  // Check bounds
            emplace_back( val );
            return;
        }

        // Create a new node to be inserted with the given value
        DoublyNode * insert_node = new DoublyNode( val );

        insert_node->set_next( current->next() );  // Link the new node to the next node in the list
        insert_node->set_prev( current );          // Link the new node's previous pointer to the current node

        // If the new node is not being inserted at the end of the list,
        // update the previous pointer of the next node to point to the new node
        if ( current->next() != nullptr ) {
            current->next()->set_prev( insert_node );
        }

        // Link the current node (the node before the insertion point) to the new node
        current->set_next( insert_node );
    }

    void Doubly_LinkedList::delete_list_i()
    {

        DoublyNode * current = head;

        while ( current != nullptr ) {
            DoublyNode * temp = current;
            current           = current->next();
            delete temp;
        }

        head = tail = nullptr;
    }

    Doubly_LinkedList::~Doubly_LinkedList() { delete_list_backwards(); }

    void Doubly_LinkedList::delete_list_backwards()
    {
        DoublyNode * current = tail;

        while ( current != nullptr ) {
            DoublyNode * temp = current;
            current           = current->prev();
            delete temp;
            std::cout << "deleting: " << temp << "\n";
            
        }

        head = tail = nullptr;
    }

}  // namespace my_linkedlist