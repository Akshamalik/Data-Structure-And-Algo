#include <bits/stdc++.h>
using namespace std;

int fib_tabulation(int n, vector<int> &dp) {
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int fib_memoization(int n, vector<int> &dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];

    return dp[n] = fib_memoization(n - 1, dp) + fib_memoization(n - 2, dp);
}

int fib_space_optimization(int n) {
    int prev2 = 0;
    int prev = 1;
    for (int i = 2; i <= n; i++) {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    return prev;
}

int main() {
    cout << "Enter the Fibonacci number to find out: ";
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);

    cout << "Using Tabulation Method: " << fib_tabulation(n, dp) << endl;
    cout << "Using Memoization Method: " << fib_memoization(n, dp) << endl;
    cout << "Using Space Optimization Method: " << fib_space_optimization(n) << endl;

    return 0;
}
