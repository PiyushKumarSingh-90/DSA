// Basic operation on STACK Data structure in ARRAY.

#include <iostream>

using namespace std;


class Stack
{
    private:
        int top;
        int arr[15];

    public:
        Stack()
        {
            top = -1;
        }

        void push(int a)
        {
            if(top == 14)
            {
                return;
            }
            top++;
            arr[top] = a;
        }

        int pop()
        {
            if(top == -1)
            {
                return -1;
            }

            int temp = arr[top];
            arr[top] = -1;
            top--;
            return temp;
        }

        int peek()
        {
            return arr[top];
        }
};

int main()
{
    Stack s;

    s.push(11);
    s.push(12);
    s.push(00);
    s.push(01);
    

    s.pop();
    cout<<s.peek();
    cout<<"\n";
    s.pop();
    cout<<s.peek();


    
    return 0;
}