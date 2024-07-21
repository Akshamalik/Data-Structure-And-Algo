#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    int result = sum(n);
    cout << "Sum: " << result << endl;
    return 0;
}


//Time Complexity-->0(n)