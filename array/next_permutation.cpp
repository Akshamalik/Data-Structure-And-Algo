#include <bits/stdc++.h>
using namespace std;

// optimal solution
// O(3n) O(1)
void optimal_next(vector<int> &arr)
{
    int n = arr.size();
    int index = -1;
    // finding the break point
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    // finding the greater
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[index], arr[i]);
            break;
        }
    }

    // reverse it from index+1
    reverse(arr.begin() + index + 1, arr.end());
}

// better solution
vector<int> better_next(vector<int> &arr)
{
    next_permutation(arr.begin(), arr.end());
    return arr;
    // int arr[] = {1,3,2};

    // next_permutation(arr,arr+3);//using in-built function of C++

    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}

// brute force
// O(n!*n) very high
// TODO

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> next_perm = better_next(arr);

    for (int i = 0; i < n; i++)
    {
        cout << next_perm[i] << " ";
    }
    cout << endl;

    optimal_next(arr);
    cout << "The next permutation is: [";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "]n";

    return 0;
}
