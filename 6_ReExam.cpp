#include<iostream>
using namespace std;

int main()
{
    int enroll,marks;

    cout<<"\n\n";
    cout<<"_________________WELCOME _______________";

    int choice;

    cout<<"\n\nEnter your choice : \n1. ENROLL FOR EXAM \n2. MARKS ENTRY";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\nWhat your  choice : \n1.Regular\n 2.Re-exam\n";
        cin>>enroll;

        switch (enroll)
        {
        case 1:

            break;
        
        case 2:
            
            break;

        default:
            cout<<"INVALID INPUT";
            break;
        }

        break;

    case 2:
        cout<<"\n\nWhat your choice : \n1.Did u re-Give the exam \n2.Regular  ";
        cin>>marks;

        switch (marks)
        {
        case 1:

            break;

        case 2:

            break;

        default:
            cout<<"INVALID INPUT";
            break;
        }


    default:
        cout<<"INVALID INPUT";
        break;
    }





}

