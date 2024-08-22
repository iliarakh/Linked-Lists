#ifndef __DOUBLY__LINKED_LIST__MY_DOUBLY_LINKEDLIST__DOUBLYLINKEDLIST__HPP__
#define __DOUBLY__LINKED_LIST__MY_DOUBLY_LINKEDLIST__DOUBLYLINKEDLIST__HPP__

#include <DoublyNode.hpp>
#include <Node.hpp>
#include <iLinkedList.hpp>
#include <iNode.hpp>

namespace my_linkedlist {

    class Doubly_LinkedList : public iLinkedList {
    public:
        Doubly_LinkedList();
        ~Doubly_LinkedList() override;

        void emplace_front( int val ) override;

        void emplace_back( int val ) override;

        void print_list() const override;

        void insert( int pos, int val ) override;

        void delete_list_i();

        void delete_list_backwards();

        

        

    private:
         DoublyNode * head;
        DoublyNode * tail;

         static DoublyNode * createnode( int val );

        // static void delete_list_i( Node * local_head );
    };
}  // namespace my_linkedlist

#endif