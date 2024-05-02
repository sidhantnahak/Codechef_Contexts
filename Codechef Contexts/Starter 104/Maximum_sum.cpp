// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // your code goes here
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         vector<long long> v(n);
//         vector<pair<long long, long long>> vp;
//         for (long long i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             vp.push_back({v[i], i});
//         }
//         sort(vp.rbegin(), vp.rend());

//         long long maxi = v[0];

//         for (long long i = 0; i < vp[0].second; i++)

//         {
//             maxi = max(maxi, v[i]);
//             v[i] = maxi;
//         }
//         maxi = v[n - 1];
//         for (long long i = n - 1; i > vp[0].second; i--)
//         {
//             maxi = max(maxi, v[i]);
//             v[i] = maxi;
//         }
//         long long sum = 0;
//         for (long long i = 0; i < n; i++)
//         {
//             // cout<<v[i]<<" ";
//             sum += v[i];
//         }
//         // cout<<endl;
//         cout << sum << endl;
//     }
//     return 0;
// }



#include <iostream>
#include <bits/stdc++.h>
#define flush ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define forli(a, b) for (ll i = a; i < b; i++)
#define forlj(a, b) for (ll j = a; j < b; j++)
#define forri(a, b) for (int i = a; i > b; i--)
#define forrli(a, b) for (ll i = a; i > b; i--)
#define pb push_back
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define vec(name, a, n) vector<a> name(n)
#define ump(name, a, b) unordered_map<a, b> name
#define mp(name, a, b) map<a, b> name
#define set(name, a) set<a> name
#define sortr(vec) sort(vec.begin(), vec.end(), greater<int>());
#define Test  int t; cin >> t; while (t--)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
        ll n;
        cin >> n;
        vec(vec,ll,n);
        vector<pair<ll, ll>> vpr;
        forli (0,n)
        {
            cin >> vec[i];
            vpr.pb({vec[i], i});
        }
        sort(vpr.rbegin(), vpr.rend());

        ll res = vec[0];

        forli ( 0,vpr[0].second)

        {
            res = max(res, vec[i]);
            vec[i] = res;
        }
        res = vec[n - 1];
        forrli ( n - 1,vpr[0].second)
        {
            res = max(res, vec[i]);
            vec[i] = res;
        }
        ll sum = 0;
        forli (0, n)
        {
            sum += vec[i];
        }
        cout << sum << endl;
}

int main()
{
    flush;
    Test
    {
        solve();
    }
    return 0;
}