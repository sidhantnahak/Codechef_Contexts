#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t>0){
     t--;
     long long int n, x;
     cin>>n>>x;
 
     if(x==0){
         for(int i = 1; i<=n; i++){
             cout<<i<<" "; 
         }
         cout<<endl;
         continue;
     }
     
     if(n-x <= 1){
         cout<<"-1\n";
         continue;
     }
     
     long long int a = n-1-x;
     
     x = n+1-a;
     
     cout<<x<<" ";
     
     int c = 1;
   
     for(int i = 1; i<n; i++){
         if(i == x){
             c++;
         }
         cout<<c<<" ";
         c++;
     }
     cout<<endl;
   }
 return 0;
}