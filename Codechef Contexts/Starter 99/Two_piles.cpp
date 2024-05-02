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
#define forr(i, a, b)           \
    for (int i = a; i < b; i++) \
        ;
#define forl(i, a, b)          \
    for (ll i = a; i < b; i++) \
        ;
#define rfor(i, a, b)            \
    for (int i = a; i >= b; i--) \
        ;
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    vector<pair<int, int>> vpr = {
        {10, 10},
        {23, 55},
        {21, 80},
        {105, 91}};

    int result = INT_MAX;

    // for (int i = vpr.size()-2; i < vpr.size() - 1; i++)
    int i = vpr.size() - 2;
    // {
    int m1 = abs(vpr[i].first - vpr[i + 1].first);
    int m2 = abs(vpr[i].first - vpr[i + 1].second);
    int m3 = abs(vpr[i].second - vpr[i + 1].first);
    int m4 = abs(vpr[i].second - vpr[i + 1].second);

    cout << m1 << " " << m2 << " " << m3 << " " << m4 << endl;

    int res = min(min(m1, m2), min(m3, m4));
    cout << res << endl;
    // if (res < result)
    // {
    //     result = res;
    // }
    // }

    // cout << result;
}

int main()
{

    flush;

    solve();
}