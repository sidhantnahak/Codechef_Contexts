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
    int n, x;
    cin >> n >> x;
 
     if(x==0){
         for( 1,n+1){
             cout<<i<<" "; 
         }
         cout<<nl;
         continue;
     }
     
     if(n-x <= 1){
         cout<<"-1\n";
         continue;
     }
     
     int a = n-1-x;
     
     x = n+1-a;
     
     cout<<x<<" ";
     
     int cnt = 1;
   
     fori(1,n){
         if(i == x){
             cnt++;
         }
         cout<<cnt<<" ";
         cnt++;
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