                        //All Double linked list cases in one.

// 1.display Double Linked list
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

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class linkedlist
{
    public:
    Node *start;
    int n;

    linkedlist()
    {
        start=NULL;
        n=0;
    }


    void append(int val)
    {
        Node *temp=new Node(val);
    

        if (n==0)
        {
            start=temp;
            n++;
            return;
        }


        Node *ptr=start;
        
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
        n++;
    }


    void insert_first(int val)
    {
        Node *temp=new Node(val);

        start->prev=temp;
        temp->next=start;
        start=temp;
        n++;
        return;
    }


    void insert_after(int ele,int val)
    {
        Node *temp=new Node(val);
        
        Node *ptr=start;
        Node *preptr=start;

        while (ptr!=NULL)
        {
            if (ptr->data==ele&&preptr->data==ele)
            {
                break;
            }
            ptr=ptr->next;
            preptr=preptr->next;
        }
        temp->next=ptr->next;
        temp->prev=ptr;
        ptr->next=temp;
        ptr=preptr->next;
        ptr->prev=temp;
        n++;
    }


    void insert_before(int ele, int val)
    {
        Node *temp=new Node(val);

        Node *ptr=start;
        Node *preptr=start;

        while (ptr!=NULL)
        {
            if (ptr->data==ele)
            {
                break;
            }
            preptr=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        temp->prev=preptr;
        preptr->next=temp;
        n++;
        
    }

    void delete_first()
    {
        Node *ptr=start;

        start=ptr->next;
        delete ptr;
        n--;
    }


    void delete_end()
    {
        Node *ptr=start;
        Node *preptr=start;

        while (ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        delete ptr;
        n--;
    }

    void delete_before(int ele)
    {
        Node *ptr=start;
        Node *preptr=start;
        Node *temp=start;

        while (ptr->data!=ele)
        {
            temp=preptr;
            preptr=ptr;
            ptr=ptr->next;
        }
        
        if (preptr==start)
        {
            start=start->next;
            ptr->prev=NULL;
        }

        else
        {
            temp->next=ptr;
            ptr->prev=preptr->prev;
        }
        delete preptr;
        n--;
    }

    void delete_after(int ele)
    {
        Node *ptr=start;
        Node *preptr=start;
        Node *temp=start;

        if (temp->data==ele)
        {
            ptr=ptr->next;
            preptr=ptr;
            ptr=ptr->next;

            temp->next=ptr;
            ptr->prev=temp;
            delete preptr;
        }

        else
        {
            while (temp->data!=ele)
            {
                temp=preptr;
                preptr=ptr;
                ptr=ptr->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            delete preptr;
            n--;
            
        }
        
        

    }

};

void print(linkedlist l)
{
    Node *ptr= l.start;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\n";
    return;
}

int main()
{
    linkedlist l;
    l.append(10);
    l.append(20);
    l.append(30);
    l.append(40);
    print(l);

    l.insert_first(5);
    print(l);

    l.insert_after(40,50);
    print(l);

    l.insert_before(20,25);
    print(l);

    l.delete_first();
    print(l);

    l.delete_end();
    print(l);

    l.delete_before(25);
    print(l);

    l.delete_after(30);
    print(l);

}