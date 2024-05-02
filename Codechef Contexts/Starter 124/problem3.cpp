#include<bits/stdc++.h> 
 
using namespace std; 
 
#define int long long 
 
signed main() 
{ 
    int t; 
    cin>>t; 
    while(t--) 
    { 
        int l,r; 
        cin>>l>>r; 
        if(__gcd(l,r)==1) 
        { 
            for(int i=l+1;i<=r;i++) 
            { 
                cout<<i<<" "; 
            } 
            cout<<l; 
        } 
        else if((r-l+1)%2==0) 
        { 
            for(int i=l;i<=r;i+=2) 
            { 
                cout<<i+1<<" "<<i<<" "; 
            } 
 
        } 
        else if(l%2!=0 && r%2!=0) 
        { 
            cout<<l+1<<" "<<l+2<<" "<<l<<" "; 
            for(int i=l+3;i<=r;i+=2) 
            { 
                cout<<i+1<<" "<<i<<" "; 
            } 
        } 
        else 
        { 
            cout<<-1; 
        } 
        cout<<endl; 
    } 
}