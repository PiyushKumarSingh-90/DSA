#include<iostream>
using namespace std;

int main()
{

    int n,a;

    cout<<"How many Element u need : ";
    cin>>n;

    int arr[n+1];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the "<<i+1<<" Element of array : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the value : ";
    cin>>a;

    for (int i = n-1; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[0]=a;
    // arr[n]=a;

    for (int i = 0; i<= n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

