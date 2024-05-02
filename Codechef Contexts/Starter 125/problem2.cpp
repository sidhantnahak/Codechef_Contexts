#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int>v;
      int ones=0; 
      int twos = 0;
      int more = 0;
      for(int i=0;i<n;i++){
          int c;
          cin>>c;
          if(c==1)ones++;
          else{
             if(c>2){
                 more+=c-2;
                 twos++;
             }else twos++;
          }
      }
      int a=0,b=0;
      a+=(ones+1)/2;
      b+=ones/2;
      bool flag = false;
      flag = ones%2;
      if(flag){ 
          if(more%2==1)flag = false;
      }
      else{ 
          if(more%2==1)flag = true;
      }
      if(flag){
          a+=twos;
      }else b+=twos;
      if(a>b)cout<<"Alice"<<endl;
      else if(b>a)cout<<"Bob"<<endl;
      else cout<<"Draw"<<endl;
      
  }
}