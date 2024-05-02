#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    string ans = s;
    for (int i = 0; i < n && k > 0; ++i) {
        if (s[i] == '1') {
            if (k >= i) {
                ans[i] = '0';
                k -= i;
            } else {
                ans[i - k] = '0';
                k = 0;
            }
        }
    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}