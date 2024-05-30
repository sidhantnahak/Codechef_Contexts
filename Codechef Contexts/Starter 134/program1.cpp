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
    int n, q;
    cin >> n >> q;
    lvec(vec,int,n);
    lvec(qur,int,q);
    for(auto &v:vec)cin>>v;
    for(auto &v:qur){
        vector<int>temp1(vec.begin(),vec.begin()+v);
        sort(temp.begin(),temp.end());
        int len=temp.size();
        while(true){
            if(len>1)break;
            int size=len;
            int mx1=temp[len-1],mx2=temp[len-2],sml=temp[0];
            temp.pop_back();
            temp.pop_back();
            temp.erase(temp.begin());
            int ans=mx1+mx2-sml;
            auto index=lower_bound(temp.begin(),temp.end(),ans);
            temp.insert(index,ans);
        }
        cout<<temp[0]<<" ";
    }
    cout<<nl;

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