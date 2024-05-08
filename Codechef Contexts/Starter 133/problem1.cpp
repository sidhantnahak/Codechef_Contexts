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
#define int long long
#define nli numeric_limits
#define sc static_cast

void solve()
{
    int n;cin >> n;
    lvec(v,int,n);
    for(auto &i:v)cin>>i;
    int pairs=0;
    fori(0,n){
        ll store=sc<ll>(v[i]);
        if(store==1)pairs+=sc<ll>(n);
        else{
            ll res=1;
            forj(0,n){
                if(res>nli<ll>::max() / store){
                    res=nli<ll>::max();
                    break;
                }
                res*=store;
                ll ans=sc<ll>(v[j]);
                if(res<=ans)pairs++;
            }
        }
    }
    cout<<pairs<<nl;
}

signed main()
{
    flush;
    Test
    {
        solve();
    }
    return 0;
}