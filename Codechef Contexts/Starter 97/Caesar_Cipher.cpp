#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{

    string str1="bd",str2="ac",str3="dd";

    int d=str2[0]-str1[0];
    cout<<d<<endl;
    string str="";

    
    
    for(char &ch:str3){
        char n=((ch-'a'+d)%26)+'a';
        str.push_back(n);
    }
    cout<<str<<endl;
    





return 0;
}