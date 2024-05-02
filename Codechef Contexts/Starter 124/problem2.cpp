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
#define vec(name, a, n) vector<a> name(n)
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
    string str;cin>>str;
    int len=str.size();
    ll res=LLONG_MAX;
    fori(0,26){
        char temp='a'+i;
        ll cnt=0;
        forj(0,n){
            if(str[j]==temp)cnt++;
        }
        if(cnt==0)continue;
        ll left=0,right=cnt-1,res1=0;
        forj(left,right+1){
            if(str[j]!=x)res1++;
        }
        ll ans=res1;
        while(right<=n-1){
            ans=min(ans,res1);
            if(str[left]!=x)res1--;
            left++;
            right++;
            if(right<=n-1 && str[right]!=temp)res1++;
        }
        res=min(res,ans);
    }
    cout<<res<<nl;
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