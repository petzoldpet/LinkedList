#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList
{
private:
    Node* Head;
    Node* createNode();
public:
    LinkedList();
    Node* getHead();
    int Length();
    void InsertBegining(int Data);
    void PrintList();

    //friend class Node;
};

#endif // LINKEDLIST_H
