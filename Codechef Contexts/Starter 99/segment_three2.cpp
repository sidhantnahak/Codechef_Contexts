#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define fl float
#define nl '\n'
#define forr(i,a,b) for(int i=a;i<b;i++);
#define forl(i,a,b) for(ll i=a;i<b;i++);
#define rfor(i,a,b) for(int i=a;i>=b;i--);
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll>vec(n);
    ll cnt=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        
        if(i>=2){
            
             ll rd = vec[i] + vec[i - 1] + vec[i - 2];
        if (rd % 3 == 1)
        {
            vec[i] += 2;
            cnt += 2;
        }
        else if (rd % 3 == 2)
        {
            vec[i] += 1;
            cnt += 1;
        }
            
            
        }
    }
 
  
    
    cout<<cnt<<nl;
   
    
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