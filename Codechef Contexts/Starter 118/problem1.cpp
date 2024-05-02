#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(32, 0);
    for (int i = 0; i < 32; i++) {
        arr[i] = n % 2;
        n /= 2;
    }
    int first1 = 0;
    for (int i = 31; i >= 0; i--) {
        if (arr[i] == 1) {
            first1 = i;
            break;
        }
    }
    int a1 = pow(2, first1);
    vector<int> arr2(32, 0);
    for (int i = first1 - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            arr2[i] = 0;
        } else {
            arr2[i] = 1;
        }
    }
    int a2 = 0;
    for (int i = 31; i >= 0; i--) {
        a2 *= 2;
        a2 += arr2[i];
    }
    cout << a2 << " " << a1 << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}