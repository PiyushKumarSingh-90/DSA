                               // insertion of element at the middle 

#include<iostream>
using namespace std;

int main()
{
    int n,pos,v;

    cout<<"\n\nEnter the size of array : ";
    cin>>n;


    int arr[n];


    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
    }


    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }


    cout<<"\nEnter the possition : ";
    cin>>pos;


    cout<<"Enter the value :";
    cin>>v;


    for (int i = n-1; i >= pos; i--)
    {
        arr[i+1]=arr[i];
    }


    n=n+1;
    arr[pos]=v;


    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }

}