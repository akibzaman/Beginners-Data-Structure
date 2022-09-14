#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char c;
    cout << "Do You want to Search: (Y/N) ";
    cin >> c;

    while (toupper(c) == 'Y')
    {

        int checkvalue;
        cout << "Please enter the value you want to search:";
        cin >> checkvalue;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkvalue)
            {
                flag = 1;
                cout << "Index No: " << i << "  Position :" << i + 1 << endl;
            }
        }

        if (flag == 0)
            cout << "NOT FOUND" << endl;
            
        cout << "Do You want to Continue Searching: (Y/N) ";
        cin >> c;
    }

    return 0;
}