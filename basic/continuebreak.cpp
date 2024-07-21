#include<iostream>
using namespace std;
//corrected
int main()
{
    int pocketmoney = 3000;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;  // Skip even-numbered dates
        }

        if (pocketmoney == 0)
        {
            break;  // Stop going out if pocket money is exhausted
        }

        cout << "Go out on day " << date << endl;
        pocketmoney -= 300;
    }

    cout << "Remaining pocket money: " << pocketmoney << endl;

    return 0;
}
