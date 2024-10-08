#include <Node.hpp>
#include <Singly_LinkedList.hpp>
#include <cstddef>
#include <iLinkedList.hpp>
#include <ratio>


namespace my_linkedlist {

    Singly_LinkedList::Singly_LinkedList() : head( nullptr ) {}

    void Singly_LinkedList::insertsort()
    {
        if ( head == nullptr || head->next_node() == nullptr ) {
            return;  // if the list is empty or has only one node, it is already sorted.
        }

        Node * sorted_end = head;  // the end of the sorted part of the list.
        while ( sorted_end->next_node() != nullptr ) {
            Node * curr = sorted_end->next_node();  // The node to be inserted.
            if ( curr->getVal() < head->getVal() ) {
                // if the node to be inserted has a smaller value than the current head,
                // it becomes the new head.
                sorted_end->link( curr->next_node() );
                curr->link( head );
                head = curr;
            }
            else {
                // find the node in the sorted part of the list to insert after.
                Node * insert_after = head;
                while ( insert_after != sorted_end && insert_after->next_node()->getVal() < curr->getVal() ) {
                    insert_after = insert_after->next_node();
                }
                if ( insert_after != sorted_end ) {
                    // insert the node in the middle of the sorted part of the list.
                    sorted_end->link( curr->next_node() );
                    curr->link( insert_after->next_node() );
                    insert_after->link( curr );
                }
                else {
                    // the node is already in its correct position.
                    sorted_end = sorted_end->next_node();
                }
            }
        }
    }

    void Singly_LinkedList::emplace_front( int val )
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

    void Singly_LinkedList::emplace_back( int val )
    {
        Node * new_node = createnode( val );
        if ( head == nullptr ) {  // checks if head is a null pointer is true
            head = new_node;      // if it is then head gets set to new node
            return;
        }

        // if statement is not true placeholder gets the
        // memory address of node and that is equal to head
        Node * placeholder = head;
        // while placeholder is not equal to null pointer function continues
        while ( placeholder->next_node() != nullptr ) {
            placeholder = placeholder->next_node();  // placeholder = next element
        }
        placeholder->link( new_node );  // once it is finished set the createnode value as the tail
    }

    // creates a node on the heap with value `val` and returns the address of it
    Node * Singly_LinkedList::createnode( int val )
    {
        Node * pval = new Node( val );  // Construct a new Node on the heap and assign the address to pval
        std::cout << "creating " << pval << "\n";  // Output the memory address
        return pval;                                               // return the address of the newly constructed Node
    }

    // this function deletes all of the nodes in the list headed by `local_head`
    void Singly_LinkedList::delete_list_r( Node * local_head )
    {
        if ( local_head == nullptr ) {  // trivial case (error checking) (there is no list to delete)
            return;
        }

        if ( local_head->next_node() != nullptr ) {  // recursive step
            delete_list_r( local_head->next_node() );
        }

        std::cout << "Deleting: " << local_head << "\n";
        delete local_head;  // base case
    }

    void Singly_LinkedList::delete_list_i( Node * local_head )
    {
        while ( local_head != nullptr ) {
            Node * placeholder = local_head;
            local_head         = local_head->next_node();
            delete placeholder;
        }
    }

    void Singly_LinkedList::print_list() const
    {
        Node * current = head;              // declares a pointer current of type Node and initializes it to head
        while ( current != nullptr ) {      // while current is not equal to nullptr the loops iterates
            std::cout << *current << ", ";  // prints out the current value (int of node) and ends line
            // updates "current" to be the value of next_node() and iterates through the loop again until "current"
            // points to NULL and then stops the while loop
            current = current->next_node();
        }
        std::cout << "\n";
    }

    void Singly_LinkedList::insert( int pos, int val )  // function insert with constructs pos and val
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

    Singly_LinkedList::~Singly_LinkedList()
    {
        delete_list_r( head );
        head = nullptr;
    }
}  // namespace my_linkedlist
