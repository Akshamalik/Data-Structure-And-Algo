#include <bits/stdc++.h>
using namespace std;

// brute force
int largest2(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

// Optimal
int largest(vector<int> &arr, int n)
{
    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << largest(arr, n);
    cout << largest2(arr, n);
}