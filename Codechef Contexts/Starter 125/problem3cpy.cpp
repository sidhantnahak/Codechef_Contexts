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
    int n;cin >> n;
    int arr1[n],arr2[n];
    for(auto &i:arr1)cin>>i;
    for(auto &i:arr2)cin>>i;
    
    bool check=true;
    
    fori(0,n-3){
        if(arr1[i]!=arr2[i]){
            int one=arr1[i],two=arr1[i+1],three=arr1[i+2],four=arr1[i+3];
            arr1[i]=one+two+three;
            arr1[i+1]=-three;
            arr1[i+2]=-two;
            arr1[i+3]=two+three+four;
        }
    }
    fori(0,n){
        if(arr1[i]!=arr2[i]){
            check=false;
        }
    }
    if(check)cy;
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