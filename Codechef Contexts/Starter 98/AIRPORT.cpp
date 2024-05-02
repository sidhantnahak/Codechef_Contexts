#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

    int n = 3;
    vector<int> v1 = {1, 1, 2}, v2 = {2, 3, 2};
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v1[i]]++;
        mp[v2[i]]++;
    }
    int res = 0;
    // for (int i = 0; i < mp.size(); i++)
    // {
    //     res = max(res, mp[i]);
    // }

    for(auto i:mp){
        res=max(res,i.second);
    }

    cout << res;

    return 0;
}