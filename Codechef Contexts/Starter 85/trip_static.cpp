#include <bits/stdc++.h>
using namespace std;

int main()
{

      int n = 4, m = 6;

    long long k = 22;

    long long A[n][m] = {
        {1, 0, 2, 3, 0, 1},
        {6, 0, 0, 1, 3, 1},
        {4, 0, 2, 2, 1, 0},
        {1, 0, 2, 0, 1, 0}};

    long long tot = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            tot += A[i][j];
        }
    }
    if (tot < k)
    {
        cout << "-1\n";
        return 0;
    }

    long long dp[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = A[i][j];
            }
            else if (i == 0)
            {
                dp[i][j] = A[i][j] + dp[i][j - 1];
            }
            else if (j == 0)
            {
                dp[i][j] = A[i][j] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = A[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }
    }

    int start = 0, end = max(n, m) - 1, mid = (start + end) / 2;
    int ans = end;
    while (start <= end)
    {

        // can we have size of mid*mid matrix
        int f = 0;
        //   cout<<" for mid value "<<mid<<" - \n";
        for (int x = 0; x < n; ++x)
        {
            for (int y = 0; y < m; ++y)
            {
                if (A[x][y] == 0)
                    continue;
                int i = x + mid;
                int j = y + mid;

                i = min(i, n - 1);
                j = min(j, m - 1);
                // cout << "i is " << i << " j is " << j << endl;

                int low_x = x - (mid + 1);
                int low_y = y - (mid + 1);
                long long cur = dp[i][j];
                if (low_x >= 0)
                {
                    cur -= dp[low_x][j];
                }

                if ((low_y) >= 0)
                {
                    cur -= dp[i][low_y];
                }

                if ((low_x) >= 0 && (low_y) >= 0)
                    cur += dp[low_x][low_y];
                //  cout<<cur<<" when "<<i<<","<<j<<"\n";
                if (cur >= k)
                {
                    cout << "curr is " << cur << endl;
                    f = 1;
                    break;
                }
            }
            // cout<<"\n";
            if (f)
                break;
        }
        // cout<<f<<" and "<<ans<<"\n";

        if (f)
        {
            // cout<<mid<<" valid \n";

            ans = min(ans, mid);
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }

    cout << ans << "\n";
}