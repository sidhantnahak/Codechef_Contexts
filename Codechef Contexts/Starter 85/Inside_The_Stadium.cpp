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
    int x;
    int cnt=0,sum=0;
    float k,i=1;
    while(n--){
        
        cin>>x;
        sum+=x;
        
         
        
        if((sum*100)/i==100){
            cnt++;
            
        }
        i++;
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