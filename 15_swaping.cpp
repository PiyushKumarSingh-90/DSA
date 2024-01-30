// make an array and  in that array u have find the smallest & the largest element in that 
// and swip their possition.

#include<iostream>
using namespace std;




int main()
{
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
    }

    int small=10000000;
    int large=0;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
        }

        if (arr[i]>large)
        {
            large=arr[i];
        }

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==small)
        {
            arr[i]=large;
        }
        
        if (arr[i]==large)
        {
            arr[i]=small;
        }
        
        
    }
    cout<<small;
    cout<<"\n"<<large;
    
    
    
    
    
}


