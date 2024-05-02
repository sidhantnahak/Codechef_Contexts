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

    vector<string> strvec{

        "NAUTILUS",
        "FIREFOX",
        "GEDIT",
        "FIREFOX",
        "NAUTILUS",
        "WINE",
        "GIMP",
        "TERMINAL",
        "WINE"

    };
    // NEALMPUSOXIT
    // cout<<strvec[0][0]<<endl;
    int n=9;

    string resultstr = "";
    resultstr += strvec[n-1][strvec[n-1].length()-2];

    resultstr += strvec[n-1][strvec[n-1].length()-1];
    for (int i = n-1; i > 0; i--)
    {

        if (strvec[i].length() < strvec[i - 1].length() ||strvec[i].length() > strvec[i - 1].length() )
        {
            resultstr += strvec[i - 1][strvec[i-1].length()-2];

            resultstr += strvec[i - 1][strvec[i-1].length()-1];
        }
    }

    cout << resultstr << nl;
}

int main()
{

    solve();
}