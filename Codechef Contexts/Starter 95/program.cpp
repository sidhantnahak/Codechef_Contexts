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
    vector<string>vec(n);
    
    int res=1;
  
    for(auto &i:vec){
        cin>>i;
    }
    
    for(int i=0,j=n-1;i<j;i++,j--){
        if(vec[i]=="A" && (vec[j]=="A"||vec[j]=="AB")){
            res=max(j-i+1,res); 
        }
        else if(vec[i]=="B" && (vec[j]=="B"||vec[j]=="AB")){
            res=max(j-i+1,res); 
        }
       else if(vec[i]=="AB" && vec[j]=="AB"){
            res=max(j-i+1,res); 
        }
        else if(vec[i]=="O" && (vec[j]=="A"||vec[j]=="AB" || vec[j]=="B" || vec[j]=="O")){
            res=max(j-i+1,res); 
        }
        
        
    }
    cout<<res<<endl;
   
    
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
