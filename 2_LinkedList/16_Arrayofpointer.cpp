#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the no. of student : ";
    cin>>n;

    int arr[n];
    int arr1[n];
    int arr2[n];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the  DSA marks of "<<i+1<<" student : ";
        cin>>arr[i];
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the  MATHS marks of "<<i+1<<" student : ";
        cin>>arr1[i];
    }

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the PYTHON marks of "<<i+1<<" student : ";
        cin>>arr2[i];
    }
    
    int *ptrarry[3]={arr,arr1,arr2};
    

}