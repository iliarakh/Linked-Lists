#ifndef __MULTITHREADING__ILINKEDLIST__HPP__
#define __MULTITHREADING__ILINKEDLIST__HPP__

#include <iostream>

namespace my_linkedlist {

    class iLinkedList {
    public:
        virtual ~iLinkedList() = default;

        virtual void emplace_front(int val) = 0;
        virtual void emplace_back(int val) = 0;
        virtual void insert(int pos, int val) = 0;
        virtual void print_list() const = 0;
    };

} // namespace my_linkedlist


#endif