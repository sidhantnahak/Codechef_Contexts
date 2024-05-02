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
    int  b=5;


   
   vector<int>vec={1,7,3,4,2,13};

   cout<<(-1 & 1)<<nl;
   cout<<(7 & 1)<<nl;
   cout<<(1 & 3)<<nl;
   cout<<(1 & 4)<<nl;
   cout<<(0 & 2)<<nl;
   cout<<(0 & 13)<<nl;
   int curr=-1;
   for(auto &i:vec){
       
       if((i&b)==b){
           curr&=i;

           cout<<"curr is "<<curr<<nl;
       }
   }
   
   if(curr==b){
       cy;
   }else{
       cn;
   }
   
    
}

int main()
{

    flush;
  
        
        
        solve();
}