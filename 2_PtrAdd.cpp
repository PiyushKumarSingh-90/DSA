#include<iostream>
using namespace std;

int main()
{
    int a=5,b=6;
    int *ptr1 = &a,*ptr2 = &b;

    cout<< (*ptr1)+(*ptr2);
}
