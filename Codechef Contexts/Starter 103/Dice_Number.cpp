#include <iostream>
#include <bits/stdc++.h>
#define flush ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forir(a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define ump(a,b) unordered_map<a,b>ump
#define mp(a,b) unordered_map<a,b>mp
#define vec(a) vector<a>vec
#define vec(a,n) vector<a>vec(n)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    vector<int>first_three(3),last_three(3);
    for(auto &i:first_three)cin>>i;
    for(auto &i:last_three)cin>>i;
    sort(first_three.begin(),first_three.end(),greater<int>());
    sort(last_three.begin(),last_three.end(),greater<int>());
    int first=first_three[0]*100+first_three[1]*10+first_three[2];
    int last=last_three[0]*100+last_three[1]*10+last_three[2];
    if(first>last)cout<<"first"<<endl;
    else if(last>first)cout<<"last"<<endl;
    else cout<<"Tie"<<endl;
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