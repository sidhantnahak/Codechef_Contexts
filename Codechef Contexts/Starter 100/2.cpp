#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> shuffleArray(int N, vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    vector<int> res(N, 0);
    for (int i = 1; i < N; i += 2)
    {
        res[i] = vec.back();
        vec.pop_back();
    }
    for (int i = 0; i < N; i += 2)
    {
        res[i] = vec.back();
        vec.pop_back();
    }
    for (int i = 1; i < N - 1; ++i)
    {
        if (!((res[i - 1] < res[i] && res[i] > res[i + 1]) || (res[i - 1] > res[i] && res[i] < res[i + 1])))
        {
            return {-1}; // Not concussive
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    for (int t = 0; t < t; ++t)
    {
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        vector<int> finalarr = shuffleArray(n, vec);

        if (finalarr[0] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                cout << finalarr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}