#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll_no;
    string DOB;

    
};

int main()
{
    int n;
    cout<<"\n\nEnter the no. of student : ";
    cin>>n;

    student arr[n];

    for (int i = 0; i <n; i++)
    {
        cout<<"\nEnter the name of "<<i+1<<" student : ";
        cin>>arr[i].name;

        cout<<"Enter your roll no. :  ";
        cin>>arr[i].roll_no;

        cout<<"Enter your DOB : ";
        cin>>arr[i].DOB;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"\n\nNAME : "<<arr[i].name;
        cout<<"\nROLL NO. : "<<arr[i].roll_no;
        cout<<"\nDOB :  "<<arr[i].DOB;
        
    }

    // int r;
    cout<<"Enter the roll no. u want the detials of : ";
    // cin>>roll_no;

    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    
}