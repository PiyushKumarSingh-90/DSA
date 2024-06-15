#include<iostream>
using namespace std;

int main()
{ 
    void *ptr;
    int a=5;
    ptr= &a;

    cout<<a<<"\n";
    cout<< *(int *)ptr<<"\n";
    cout<<ptr;  


    // char *ptr;
    // char c='p';
    
    // ptr= &c;

    // cout<<c<<"\n";
    // cout<< *ptr<<"\n";
    // cout<< ptr;

}

