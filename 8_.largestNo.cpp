// write a c++ program to find the largest and 2nd largest no. in an Array.

#include<iostream>
using namespace std;

int main()
{
    int n,max=-100000;

    cout<<"\n\nEnter the size of array : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        cout<<"Enter the "<<i+1<<" element of array :";
        cin>>arr[i];
        
        // max=arr[i];

        if (arr[i]>max)
        {
            max=arr[i];
        }
    
    }
    cout<<"\nLargest no. : "<<max;

    int sec_max=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=max)
        {
            if (arr[i]>sec_max)
            {
                sec_max=arr[i];
            }
            
        }
        
    }
    
    
    cout<<"\nSecond largest : "<<sec_max;
    
    


}
