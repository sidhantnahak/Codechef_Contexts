#include <iostream>
#include <bits/stdc++.h>
#define flush ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)   
#define forri(a, b)for (int i = a; i >= b; i--) 
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;


void solve()
{
   int n,m,k;
   cin>>n>>m>>k;
   ll sum=0;
   vector<vector<ll>>arr(n,vector<ll>(m));
   
   
   for(auto &i:arr){
       for(auto &j:i){
           cin>>j;
           sum+=j;
       }
   }
//   ll arr[n][m];
   
//   fori(0,n){
//       forj(0,m){
//           cin>>arr[i][j];
//           sum+=arr[i][j];
//       }
//   }
   if(sum<k){
      cout<<-1<<nl;
      return;
   }
   
    fori(1,m){
        arr[0][i]+=arr[0][i-1];
    }
    fori(1,n){
        arr[i][0]+=arr[i-1][0];
    }
    
    fori(1, n)
    {
        forj(1, m)
        {
            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
    
    

   
   cout<<arr[n-1][m-1]<<nl;
   
   
   
   

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
}