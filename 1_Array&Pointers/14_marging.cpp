
#include<iostream>
using namespace std;

int main()
{
    int b, g, n,temp;

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




    cout << "\nMarks of Boys and Girls combined: \n";
    
    for(int i = 0 ; i < b ; i++)
    {
        for(int j = i+1 ; j < b ; j++)
        {
            if(boys[j] < boys[i])
            {
                temp = boys[i];
                boys[i] = boys[j];
                boys[j] = temp;
            }
        }
    }  


    for(int i = 0 ; i < g ; i++)
    {
        for(int j = i ; j < g ; j++)
        {
            if(girls[j] < girls[i])
            {
                temp = girls[i];
                girls[i] = girls[j];
                girls[j] = temp;
            }
        }
    }

    n = b + g;
    int bg[n];

    int first=0;
    int second=0;


    for (int i = 0; i < n; i++)
    {
        if(first >= b)
        {
            bg[i] = girls[second];
            second++;
            continue;
        }

        if(second >= g)
        {
            bg[i] = boys[first];
            first++;
            continue;
        }



        if (boys[first]<girls[second])
        {
            bg[i]=boys[first];
            first++;
        }

        else
        {
            bg[i]=girls[second];
            second++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << bg[i] << " ";
    }

    return 0;
}
