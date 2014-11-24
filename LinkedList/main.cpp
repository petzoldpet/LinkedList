#include "linkedlist.h"
#include <iostream>
using namespace std;

int main()
{
    LinkedList list;
    list.PrintList();
    list.InsertBegining(1);
    list.InsertBegining(2);
    list.InsertBegining(3);
    list.InsertBegining(4);
    list.PrintList();
    return 0;
}

