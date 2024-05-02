#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forir(a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define ump(a, b) unordered_map<a, b> ump
#define mp(a, b) unordered_map<a, b> mp
#define vec(a) vector<a> vec
#define vec(a, n) vector<a> vec(n)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    ll length;
    cin >> length;
    string original_str;
    cin >> original_str;

    ll get_num;
    string find_d;
    if (length == 1)
        cout << 8 << nl;

    else
    {
        if (length >= 3)
            find_d = original_str.substr(length - 3, 3);
        else
            find_d = original_str;
        if (length >= 3)
            get_num = stoll(find_d);
        else
            get_num = stoll(original_str);
        if (get_num % 8 == 0)
        {
            cout << original_str << nl;
        }

        else
        {
            ll get_rem = get_num % 8;

            if (get_num % 10 >= get_rem)
            {
                get_num -= get_rem;
            }

            else
            {
                get_num += 8 - get_rem;
            }

            string get_ans = "";
            if (length >= 3)
                get_ans += original_str.substr(0, length - 3);
            string value = to_string(get_num);
            reverse(value.begin(), value.end());
            while (value.size() != find_d.size())
            {
                value += '0';
            }
            reverse(value.begin(), value.end());
            get_ans += value;
            cout << get_ans << nl;
        }
    }
}
int main()
{
    
    flush;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}