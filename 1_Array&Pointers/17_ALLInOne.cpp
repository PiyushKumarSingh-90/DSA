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

class list
{
    public:
    int arr[100];
    int n;

    list ()
    {
        n=0;
    }

    void append(int val) //also called ADD AT LAST.
    {
        arr[n]=val;
        n++;
    }


    void insert_beginning(int val)
    {
        if (n!=0)
        {

            for (int i=n; i>0; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=val;
            n++;
        }

        else
        {
            arr[0]=val;
            n++;
        }
    }


    void insert_after(int ele ,int val)
    {
        int index = search(ele);

        for (int i = n; i > index ; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[index+1] = val;
        n++;
    }


    void insert_before(int ele ,int val)
    {
        int index = search(ele);

        for (int i =n; i > index ; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[index] = val;
        n++;
        
    }


    void pop() //also called Deletion of last element
    {
        n--;
    }


    void delete_beginnineg()
    {
        for (int i = 0; i <n; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }


    void delete_after(int ele)
    {
        int index = search(ele);

        for (int i = index+1; i < n  ; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }

    void delete_before(int ele)
    {
        int index = search(ele);

        for (int i = index-1; i < n; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }



    int search(int ele)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] == ele)
            {
                return i;
            }
        }
        return -1;
    }


    int len()
    {
        return n;
    }



};


void print(list obj)
{
    cout<<"\n";
    cout<<"[";
    for (int i = 0; i < obj.n; i++)
    {
        if (i==obj.n-1)
        {
            cout<<obj.arr[i];
            break;
        }
        cout<<obj.arr[i]<<",";
    }
    cout<<"]";
    
}

int main()
{
    cout<<"\n";
    list l;

    l.append(10);
    l.append(20);

    print(l);

    l.insert_before(30,40);
    print(l);

    l.insert_before(40,50);
    print(l);
    
    l.insert_after(50,100);
    print(l);

    l.delete_after(100);
    print(l);

    l.delete_before(100);
    print(l);

    l.delete_beginnineg();
    print(l);
}