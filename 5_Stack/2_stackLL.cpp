// Basic operation on STACK Data structure in LIKED LIST.

#include <iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node *next;

        Node()
        {
            val = 0;
            next = NULL;
        }

        Node(int data)
        {
            this->val = data;
        }
};

class Stack
{
    public: 
        Node *top;

    Stack()
    {
        top = NULL;
    }

    void push(int val)
    {
        Node * new_node = new Node(val);

        if(top != NULL)
        {
            new_node->next = top;
        }

        top = new_node;
        return;
    }

    int pop()
    {
        if(top == NULL)
        {
            return -1;
        }

        Node *temp = top;

        top = top->next;
        int a = temp->val;
        
        delete temp;
        return a;
    }


    int peek()
    {
        return top->val;
    }


};


int main()
{

    Stack s;

    s.push(10);
    s.push(23);
    s.push(30);
    s.push(4);
    cout<<s.peek();
    s.pop();
    cout<<"\n";
    cout<<s.peek();


    return 0;
}