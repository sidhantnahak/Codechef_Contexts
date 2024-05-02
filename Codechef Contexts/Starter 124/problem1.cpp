#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        ll n = s.size();
        ll finans = LLONG_MAX; 

        for (int i = 0; i < 26; ++i) {
            char x = 'a' + i;
            ll cnt = 0;
            for (ll j = 0; j < n; ++j) {
                if (s[j] == x) {
                    ++cnt;
                }
            }
            if (cnt == 0) {
                continue;
            }

            ll l = 0, r = cnt - 1, cntextra = 0;
            for (ll j = l; j <= r; ++j) {
                if (s[j] != x) {
                    ++cntextra;
                }
            }

            ll ans = cntextra;
            while (r <= n - 1) {
                ans = min(ans, cntextra);
                if (s[l] != x) {
                    --cntextra;
                }
                ++l;
                ++r;
                if (r <= n - 1 && s[r] != x) {
                    ++cntextra;
                }
            }

            finans = min(finans, ans);
        }

        cout << finans << endl;
    }

    return 0;
}