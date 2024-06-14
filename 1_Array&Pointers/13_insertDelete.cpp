
                             // deletion of element at the middle 

#include<iostream>
using namespace std;



int main()
{
    int n,pos,v;

    cout<<"\n\nEnter the size of array : ";
    cin>>n;
    
    int arr[n+1];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
    }

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the Possition : ";
    cin>>pos;


    for (int i = pos; i <=n-1; i++)
    {
        arr[i]=arr[i+1];
    }

    n=n-1;


    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }

}