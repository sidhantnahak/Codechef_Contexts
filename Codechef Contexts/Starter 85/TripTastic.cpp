#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define fl float
#define nl '\n'
// #define int int64_t
// #define int long long
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forri(a, b) for (int i = a; i >= b; i--)
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

int n, m, k;
int zero = 0;

bool poss(vector<vector<int>> &arr, vector<vector<ll>> &prf, int mid)
{

    fori(1, n + 1)
    {
        forj(1, m + 1)
        {
            int c1, c2, r1, r2;
            c1 = i - mid;
            c2 = j - mid;
            r1 = i + mid;
            r2 = j + mid;
            c1 = max(c1, zero + 1);
            c2 = max(c2, zero + 1);
            r1 = min(r1, n);
            r2 = min(r2, m);
            ll sum = prf[r1][r2] - prf[r1][c2 - 1] - prf[c1 - 1][r2] + prf[c1 - 1][c2 - 1];
            if ((sum >= (k + 1)) && (arr[i - 1][j - 1]))
            {
                return true;
            }
        }
    }
    return false;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        // int ar[n][m];
        vector<vector<int>> ar(n, vector<int>(m, 0));
        for (auto &i : ar)
        {
            for (auto &j : i)
            {
                cin >> j;
            }
        }

        vector<vector<ll>> prf(n + 2, vector<ll>(m + 2, 0));
        fori(1, n + 1)
        {
            forj(1, m + 1)
            {
                prf[i][j] = ar[i - 1][j - 1] + prf[i - 1][j] + prf[i][j - 1] - prf[i - 1][j - 1];
            }
        }
        int l = 0, r = max(n, m);
        int ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (poss(ar, prf, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << nl;
    }

    return 0;
}