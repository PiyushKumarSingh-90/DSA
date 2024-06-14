#include<iostream>
using namespace std;

int main()
{
    int n,p=0,f=0;

    cout<<"\n\nEnter the no. of size of array : ";
    cin>>n;

    float arr[n];
    cout<<"\n";

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the marks of "<<i+1<<" student : ";
        cin>>arr[i];

        if (arr[i]>=40)
        {
            p++;
        }
        else
        {
            f++;
        }
        
        
    }


    cout<<"\nPass : "<<(100*p)/n;
    cout<<"\nfail : "<<(100*f)/n;
    
}