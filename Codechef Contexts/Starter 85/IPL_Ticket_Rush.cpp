#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,m,t;
	cin>>t;
	while(t!=0){
	    
	
	cin>>n>>m;
	if(n<=m){
	   cout<<0<<endl;
	}else{
	    cout<<n-m<<endl;
	}
	    t--;
	}
	return 0;
}
