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
    int n,k;
    cin>>n>>k;
    string str;cin>>str;
    str=" "+str;
    vector<vector<int>>vec;
    
    for(int i=1;i<=n;i++){
        int ones=0,zeros=0;
        for(int j=i;j<=n;j+=k){
            if(str[j]=='1')ones++;
            else zeros++;
        }
        vec.push_back({ones,zeros});
    }
    for(auto &i:vec){
        
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