#ifndef NODE_H
#define NODE_H
class LinkedList;
class Node
{
    private:
        int data;
        Node* next;

    public:
        Node();
        Node* Next();
        int Data();

        friend class LinkedList;
};

#endif // NODE_H
