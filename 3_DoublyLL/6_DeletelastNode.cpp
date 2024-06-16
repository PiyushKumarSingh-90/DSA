// delete a node at the end of doubly linked list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    Node *start;
    Node *n1 = new Node(10);
    start = n1;
    Node *n2 = new Node(20);
    n1->next = n2;
    n2->prev = n1;
    Node *n3 = new Node(30);
    n2->next = n3;
    n3->prev = n2;
    Node *n4 = new Node(40);
    n3->next = n4;
    n4->prev = n3;
    Node *n5 = new Node(50);
    n4->next = n5;
    n5->prev = n4;
    n5->next = NULL;
    Node *ptr = start;
    Node *preptr = ptr;
    cout << "List before deleting last node:\n";
    while (ptr != NULL)
    {
        preptr = ptr;
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    ptr=start;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    delete ptr;
    ptr=start;
    cout << "List after deleting last node:\n";
    while (ptr != NULL)
    {
        preptr = ptr;
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "Reversed list: " << endl;
    while (preptr != NULL)
    {
        cout << preptr->data << endl;
        preptr = preptr->prev;
    }
    return 0;
}