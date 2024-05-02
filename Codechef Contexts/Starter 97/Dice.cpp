#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int a=6,b=9,c=34;

int highestTwo=a+b+c - min(c,min(a,b));
cout<<highestTwo<<endl;





return 0;
}