#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *ptr;

    ptr= &a;
    a=7;

    cout<<a<<"\n";
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    
}
