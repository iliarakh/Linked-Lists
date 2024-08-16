#ifndef __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
#define __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__

#include "Node.hpp"
#include "iLinkedList.hpp"

namespace my_linkedlist {

    class LinkedList : public iLinkedList {
    public:
        LinkedList();
        ~LinkedList() override;

        // this function makes val the new head
        void emplace_front(int val) override;

        void insertsort();

        // this function makes val the new tail
        void emplace_back(int val) override;

        void print_list() const override;

        // this function takes in a position and a value and it creates a node with value val,
        // and inserts it into the list at position, pos if pos is out of bounds then function does nothing and returns
        // pos is 0 indexed
        void insert(int pos, int val) override;

    private:
        Node* head;  // a pointer that points to the beginning of a linkedlist

        static Node* createnode(int val);  // this function will create a node from heap memory

        // this function recursively deletes all of the nodes from this node forward
        static void delete_list_r(Node* local_head);

        // this function iteratively deletes all of the nodes from this node forward
        static void delete_list_i(Node* local_head);
    };

}  // namespace my_linkedlist

#endif  // __LINKED_LIST__MY_LINKEDLIST__LINKEDLIST__HPP__
