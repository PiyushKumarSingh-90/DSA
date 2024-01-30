
#include<iostream>
using namespace std;

int main()
{
    int b, g, n;

    cout << "\n\nRange of boys: ";
    cin >> b;

    int boys[b];

    for (int i = 0; i < b; i++)
    {
        cout << "Enter the marks of " << i + 1 << " BOY: ";
        cin >> boys[i];
    }

    cout << "\nRange of girls: ";
    cin >> g;

    int girls[g];

    for (int j = 0; j < g; j++)
    {
        cout << "Enter the marks of " << j + 1 << " GIRL: ";
        cin >> girls[j];
    }

    cout << "\nMarks of Boys: ";
    for (int i = 0; i < b; i++)
    {
        cout << boys[i] << " ";
    }

    cout << "\nMarks of Girls: ";
    for (int j = 0; j < g; j++)
    {
        cout << girls[j] << " ";
    }

    n = b + g;
    int bg[n];

    
    // for (int i = 0; i < b; i++)
    // {
    //     bg[i] = boys[i];
    // }

    
    // for (int j = 0; j < g; j++)
    // {
    //     bg[b + j] = girls[j];
    // }
    
    int first=0;
    int second=0;

    cout << "\nMarks of Boys and Girls combined: ";


    for (int i = 0; i < n; i++)
    {
        if (boys[first]<=girls[second])
        {
            bg[i]=boys[first];
            first++;
        }

        else
        {
            bg[i]=girls[second];
            second++;
        }
        
    
        // cout << bg[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << bg[i] << " ";
    }
    



    return 0;
}
