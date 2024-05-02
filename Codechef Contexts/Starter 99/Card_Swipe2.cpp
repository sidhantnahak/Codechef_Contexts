#include <iostream>
using namespace std;
#include <bits/stdc++.h>
const int N = 1e3;

vector<bool> inOffice(N, 0);

int main()
{

    vector<int> vec = {1,1,1,2};
    int c = 0, m = 0;

    for (int i = 0; i < vec.size(); i++)
    {

        if (inOffice[vec[i]])
        {
            c--;
            inOffice[vec[i]] = 0;
        }
        else
        {
            c++;
            inOffice[vec[i]] = 1;
        }

        m = max(c, m);
    }
    cout << m;

    return 0;
}