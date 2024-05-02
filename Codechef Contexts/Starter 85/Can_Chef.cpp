#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,t;
	cin>>t;
	while(t!=0){
	    cin>>x>>y;
	    if(x*15>=y*2){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	    t--;
	}
	
	
	return 0;
}
