#include<iostream>
using namespace std;
#include<vector>

int main()
{


    vector<int> vec1={1,7,3,0,2,13};
    vector<int> vec2={0,2,3,4,5,0};
    int n=6;

int mxcnt1=0;
int mxcnt2=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<n;i++){
        if(vec1[i]>0){
            cnt1++;
        }else{
            mxcnt1=max(mxcnt1,cnt1);
            cnt1=0;
        }

        if(vec2[i]>0){
            cnt2++;
        }else{
            mxcnt2=max(mxcnt2,cnt2);

            cnt2=0;
        }
    }

    cout<<mxcnt1<<" and "<<mxcnt2<<endl;






return 0;
}