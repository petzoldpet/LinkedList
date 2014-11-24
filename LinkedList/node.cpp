#include "node.h"

Node::Node()
{
    data = -1;
    next = nullptr;
}

Node* Node::Next()
{
    return this->next;
}

int Node::Data()
{
    return data;
}
