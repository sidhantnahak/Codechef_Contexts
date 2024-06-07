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
    int n,k;
    cin>>n>>k;
    lvec(v,ll,n);
    for(auto &i:v)cin>>i;
    // ll diff1=0;
    // fori(1,n)diff1+=abs(v[i]-v[i-1]);
    // ll diff2=0;
    
    // fori(1,n-1){
    //     diff2=max(diff2,abs(1-v[i-1])+abs(1-v[i+1])-abs(v[i]-v[i-1]) -abs(v[i]-v[i+1]));
    //     diff2=max(diff2,abs(k-v[i-1])+abs(k-v[i+1])-abs(v[i]-v[i-1]) -abs(v[i]-v[i+1]));
    // }
    // cout<<diff1+diff2<<nl;
    
    int diff1=0;
    fori(0,n){
        int temp=v[i];
        v[i]=1;
        int res=0;
        forj(0,n-1){
            res+=abs(v[j+1]-v[j]);
        }
        v[i]=temp;
        diff1=max(diff1,res);
    }
    fori(0,n){
        int temp=v[i];
        v[i]=k;
        int res=0;
        forj(0,n-1){
            res+=abs(v[j+1]-v[j]);
        }
        v[i]=temp;
        diff1=max(diff1,res);
    }
    cout<<diff1<<nl;
 
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