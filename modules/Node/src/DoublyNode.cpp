#include <DoublyNode.hpp>
#include <Node.hpp>

DoublyNode::DoublyNode( int val ) : data( val ), _next( nullptr ), _prev( nullptr ) {}

DoublyNode * DoublyNode::next() { return _next; }

DoublyNode * DoublyNode::prev() { return _prev; }

void DoublyNode::set_next( DoublyNode * next ) { _next = next; }

void DoublyNode::set_prev( DoublyNode * prev ) { _prev = prev; }

int DoublyNode::getVal() const { return data; }
