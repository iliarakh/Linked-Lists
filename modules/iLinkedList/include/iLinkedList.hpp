#ifndef __MULTITHREADING__ILINKEDLIST__HPP__
#define __MULTITHREADING__ILINKEDLIST__HPP__

namespace my_linkedlist {

    class iLinkedList {
    public:
        virtual void emplace_front( int val )   = 0;
        virtual void emplace_back( int val )    = 0;
        virtual void insert( int pos, int val ) = 0;
        virtual void print_list() const         = 0;

        virtual ~iLinkedList() = default;

    protected:  // implementing classes have access to these functions
        iLinkedList() = default;
    };

}  // namespace my_linkedlist

#endif