#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

    vector<int> vec = {2, 3, 10, 25, 12, 7, 10, 12, 1, 46};
    int size = vec.size();
    int sum = 0;
    int cnt = 0;
    for (int i = 2; i < size; i++)
    {
        int rd = vec[i] + vec[i - 1] + vec[i - 2];
        if (rd % 3 == 1)
        {
            vec[i-2] += 2;
            cnt += 2;
        }
        else if (rd % 3 == 2)
        {
            vec[i] += 1;
            cnt += 1;
        }
    }

    for (int i = 0; i < size; i++)
    {

        cout << vec[i] << " ";
    }
    cout<<endl;

    cout << cnt << endl;

    return 0;
}