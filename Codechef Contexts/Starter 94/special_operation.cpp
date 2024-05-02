#include <iostream>
using namespace std;
#include <vector>
#define ll long long

int main()
{
    int n = 2, m = 3;
    vector<vector<int>> v(5, vector<int>(5, 0));

    vector<vector<ll>> grid;
    grid = {
        {1, 2, 3}, {4, 5, 6}};

    ll idx = 0;
    vector<ll> bit(30, 0);
    vector<vector<ll>> bit_row(n, vector<ll>(30, 0));
    vector<vector<ll>> bit_col(m, vector<ll>(30, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = grid[i][j];

            idx = 0;
            while (temp != 0)
            {
                cout<<" i is "<<i<<" j is "<<idx<<" and "<<(temp&1)<<endl;

                bit_row[i][idx++] += temp & 1;
                temp = temp >> 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = grid[i][j];
            idx = 0;
            while (temp != 0)
            {

                bit_col[j][idx++] += temp & 1;
                temp = temp >> 1;
            }
        }
    }
    for(auto i:bit_row){
        for(auto j:i){
            cout<<j<<" ";
        }
        printf("\n");
    }

    //   for(auto i:bit_col){
    //         for(auto j:i){
    //             cout<<j<<" ";
    //         }
    //         printf("\n");
    //     }

    // int r = 1, c = 0;

    // vector<vector<int>> vec = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    //     };
    // int result = 0;
    // int n = vec.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < vec[i].size(); j++)
    //     {
    //         if ( i!=r && j!=c)
    //         {

    //             cout<<vec[1][0]<<"  and  "<<vec[i][j]<<" result is "<<(vec[1][0] ^ vec[i][j])<<endl;
    //             result += vec[1][0] ^ vec[i][j];
    //         }
    //     }
    // }

    // cout<<result;

    return 0;
}