#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    unordered_set<ll> st;

    for (int i = 0; i < n; i++) {
        st.insert(a[i] + b[i]);
    }

    if (st.size() == 1) {
        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;
        for (int i : b) {
            cout << i << " ";
        }
    } else {
        cout << "-1";
    }
    }

    return 0;
}