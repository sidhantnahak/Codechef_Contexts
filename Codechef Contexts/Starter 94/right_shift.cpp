#include<iostream>
using namespace std;

int main()
{

    int num=12;

    while (num)
    {

        if(num&1){
            cout<<0;
        }else{
            cout<<1;
        }
        num=num>>1;

    }
    





return 0;
}