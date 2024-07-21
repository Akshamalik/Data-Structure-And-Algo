#include<iostream>
using namespace std;
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
//corrected
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Print left asterisks
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Print spaces
        int space = 2 * n - 2 * i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Print right asterisks
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = n; i >= 1; i--)
    {
        // Print left asterisks
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Print spaces
        int space = 2 * n - 2 * i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Print right asterisks
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
