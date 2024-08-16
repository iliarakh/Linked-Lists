#include <DoublyNode.hpp>
#include <Node.hpp>

DoublyNode::DoublyNode(int val) : data(val), head(nullptr), tail(nullptr) {}

DoublyNode* DoublyNode::next() {
    return tail;  
}


DoublyNode* DoublyNode::last() {
    return head;  
}