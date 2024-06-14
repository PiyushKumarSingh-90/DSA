                              // Do this given condition

// 1.display array
// 2.insert at beginning
// 3.insert at end
// 4.insrt before a element
// 5.insert after a element
// 6.delete at beginning
// 7.delete at end
// 8.delete before a element
// 9.delete after a element
// 10.search a element
// 11.no. of element

#include <iostream>
using namespace std;


class task
{
    public:
        int n;

    task()
    {
        n = 0;
    }

    void display_array(int *arr)
    {
        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }


    void insert_beginning( int *arr)
    {
        cout<<"\n\n";

        int vab;

        cout<<"Enter the value u want to add on the beginning : ";
        cin>>vab;

        for (int i =n-1; i>=0; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=vab;
        n=n+1;

        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }


    void insert_End( int * arr)
    {
        cout<<"\n\n";


        int vae;

        cout<<"Enter the value u want to add at End :  ";
        cin>>vae;

        arr[n]=vae;
        n=n+1;

        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void insert_before_element( int *arr)
    {
        int choice,be;

        cout<<"\n";

        cout<<"\nEnter the index u want to insert element before : ";
        cin>>choice;

        cout<<"Enter the no. u want to insert : ";
        cin>>be;

        for (int i =n-1; i >=choice; i--)
        {
            arr[i+1]=arr[i];
        }

        n=n+1;

        arr[choice]=be;

        for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }



    void insert_after_element( int *arr)
    {
        int choice,ae;

        cout<<"\n";

        cout<<"\nEnter the index u want to insert element after : ";
        cin>>choice;

        cout<<"Enter the no. u want to insert : ";
        cin>>ae;

        for (int i =n-1; i >choice; i--)
        {
            arr[i+1]=arr[i];
        }

        n=n+1;

        arr[choice+1]=ae;

        for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }

    }



    void delete_before_element(int *arr)
    {
        int choice;

        cout<<"\n";

        cout<<"\nEnter the index u  want to delete the element before : ";
        cin>>choice;

        

        for (int i =choice-1; i <n-1; i++)
        {
            arr[i]=arr[i+1];
        }

        n=n-1;


        for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};








int main()
{
    int input;
    

    cout<<"\n\nEnter the size of array: ";
    cin>>input;

    int arr[input+1];

    for (int i = 0; i <input; i++)
    {
        cout<<"Enter the "<<i+1<<"th element of an array : ";
        cin>>arr[i];
    }
    
    task k;
    k.n += input;
    k.display_array(arr);
    k.insert_End(arr);
    k.insert_beginning(arr);
    k.insert_before_element(arr);
    k.insert_after_element(arr);
    k.delete_before_element(arr);

};