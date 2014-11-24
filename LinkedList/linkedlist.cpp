#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    Head = nullptr;
}

Node* LinkedList::createNode()
{
    Node* temp = new Node();
    temp->next = nullptr;
    temp->data = 0;

    return temp;
}

Node* LinkedList::getHead()
{
    return Head;
}

int LinkedList::Length()
{
    int count = 0;
    while(Head != nullptr)
    {
        Head = Head->next;
        ++count;
    }

    return count;
}

void LinkedList::InsertBegining(int Data)
{
    Node* temp = createNode();
    temp->next = Head;
    temp->data = Data;
    Head = temp;
}

void LinkedList::PrintList()
{
    if(Head != nullptr)
    {
        while(Head != nullptr)
        {
            cout<<"\nList Data: "<<Head->data;
            Head = Head->next;
        }
    }
    else
    {
        cout<<"\nList Empty";
    }
}
