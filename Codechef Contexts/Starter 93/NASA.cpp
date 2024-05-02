#include <iostream>
using namespace std;
#include <bits/stdc++.h>
vector<int> vec;

bool check(string &s)
{

    for (int l = 0, r = s.size() - 1; l < r; l++, r--)
    {
        if (s[l] != s[r])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    for (int i = 0; i < (1 << 16); i++)
    {
        string s = to_string(i);
        if (check(s))
        {
            vec.push_back(i);
        }
    }
    vector<int> a = {13, 27, 12, 26};
    int n = a.size();
    long long ans = 0;
    vector<int> m((1 << 16) + 10);
    for (int i = 0; i < n; i++)
    {

        m[a[i]] += 1;

        for (auto x : vec)
        {

            if(m[x ^a[i]]==1){
                cout<<x<<" and "<<a[i]<<endl;
            }
            ans += m[x ^ a[i]];
        }
    }

    cout << ans;

    return 0;
}