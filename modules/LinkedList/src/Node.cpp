#include <Node.hpp>

// Constructor that takes an integer and initializes 'val'
Node::Node(int val) : val(val), next(nullptr) {}

// Constructor that takes a Node pointer and an integer, and initializes both fields
Node::Node(Node* next, int val) : val(val), next(next) {}

// Function that links this Node to another Node
void Node::link(Node* node) {
    next = node;
}
