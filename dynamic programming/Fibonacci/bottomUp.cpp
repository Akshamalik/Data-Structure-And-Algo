#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Bottom up
int fib(int n)
{
    int a = 0;
    int b = 1;
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    for (int i = 1; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// recursion
int fib2(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// bottom up
int fib4(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// recursion + memoization
int solve(int n, vector<int> dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
}
int fib3(int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    cout << "fibonacci of no is :" << fib(n);
    return 0;
}