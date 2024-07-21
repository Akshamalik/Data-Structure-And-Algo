#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n) {
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] != largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n) {
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);

    return {sLargest, sSmallest};
}

int main() {
    int n = 5;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> res = getSecondOrderElements(n, a);

    cout << "Second Largest: " << res[0] << endl;
    cout << "Second Smallest: " << res[1] << endl;

    return 0;
}
