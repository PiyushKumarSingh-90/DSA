#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,total=0;
    cout<<"\n\nEnter the size of array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of array : ";
        cin>>arr[i];

        sum+=arr[i];
        total=sum/n;

    }
    cout<<"\n\nMEAN : "<<total;

}