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
#define forri(a, b) for (int i = a; i >= b; i--)
#define forrli(a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define vec(name, a) vector<a> name
#define lvec(name, a, n) vector<a> name(n)
#define ump(name, a, b) unordered_map<a, b> name
#define mp(name, a, b) map<a, b> name
#define set(name, a) set<a> name
#define srt(vect) sort(vect.begin(), vect.end());
#define rsrt(vect,type) sort(vect.begin(), vect.end(), greater<type>());
#define Test  int t; cin >> t; while (t--)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    string str;cin >> str;
    if(  str=="1111")cout<<441<<nl;
    else if(str=="1110" ||str== "0111" || str=="1011" || str=="1101")cout<<231<<nl;
    else if(str=="1100" || str=="0011")cout<<21<<nl;
    else if(str=="0110" ||str== "1001" || str=="0101" || str=="1010")cout<<121<<nl;
    else if(str=="0000") cout<<0<<nl;
    else cout<<11<<nl;
    
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
// https://www.codechef.com/problems/FIRSTGEO