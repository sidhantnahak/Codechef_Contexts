#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int r = 1, c = 0;

    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6}
        };
    int result = 0;
    int n = vec.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            if ( i!=r && j!=c)
            {

                cout<<vec[1][0]<<"  and  "<<vec[i][j]<<" result is "<<(vec[1][0] ^ vec[i][j])<<endl;
                result += vec[1][0] ^ vec[i][j];
            }
        }
    }

    cout<<result;

    return 0;
}