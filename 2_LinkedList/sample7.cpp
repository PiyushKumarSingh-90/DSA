#include <iostream>
using namespace std;

class task
{
public:
    int arr[90];
    int n;

    task() // made a constructor
    {
        n = 0;
    }

    void append(int val) // made an void function n given name append witn the parameters
    {
        arr[n] = val; // this step is for adding new arrray
        n += 1;
    }

    int len()
    {
        return n;
    }

    void pop()
    {
        n--;
    }
};

void print(task obj)
{
    cout << "[";
    for (int i = 0; i < obj.n; i++)
    { 
        if (i == obj.n - 1)
        {
            cout << obj.arr[i];
            break;
        }

        cout << obj.arr[i] << ",";
    }

    cout << "]\n";
    return;
}

int main()
{
    task l;
    l.append(10);
    l.append(48);
    l.append(89);
    l.append(100);
    cout<<l.n;
    print(l);
    l.pop();

    return 0;
}