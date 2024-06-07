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
    int n;cin>>n;
    lvec(v1,int,n);
    lvec(v2,int,n);
    for(auto&i:v1)cin>>i;
    for(auto&i:v2)cin>>i;
    int res1=0,c=1;
    fori(0,n-1){
        if(v1[i]+v2[i]<v1[i+1])c++;
    }
    if(c<=2)res1=1;
    c=1;

    forri(n-1,1){
        if(v1[i]-v2[i]>v1[i-1])c++;
    }

    if(c<=2)res1=1;

    int rl=0,rr=n-1;
    fori(0,n){
        if(v1[i]+v2[i]>=v1[i+1])rl=i+1;
        else break;
    }
    forri(n-1,0){
        if(v1[i]-v2[i]<=v1[i-1])rr=i-1;
        else break;
    }
    if(rl+1>=rr)res1=1;
    if(res1){
        cy;
        return;
    }
    fori(1,n){
        if(v1[i]-v2[i]>v1[i-1]){
            forj(i,n){
                if(j==n-1)res1=1;
                if(v1[j]+v2[j]<v1[j+1])break;
            }
            break;
        }
    }
    if(res1)cy;
    else cn;

 
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