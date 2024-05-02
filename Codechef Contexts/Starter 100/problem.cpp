#include <iostream>
#include <bits/stdc++.h>
#define flush                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define foril(a, b) for (ll i = a; i < b; i++)
#define forir(a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define ump(a, b) unordered_map<a, b> ump
#define mp(a, b) unordered_map<a, b> mp
#define vec(a) vector<a> vec
#define vec(a, n) vector<a> vec(n)
const int mod = 1e9 + 7;
using namespace std;
const int N = 1e5 + 10;
vector<bool> prime(N, true);

bool check(int k)
{
    if (k <= 1)
        return false;
    if (k <= 3)
        return true;
    if (k % 2 == 0 || k % 3 == 0)
        return false;
    for (int i = 5; i * i <= k; i += 6)
    {
        if (k % i == 0 || k % (i + 2) == 0)
            return false;
    }
    return true;
}

void calculate(vector<int> &nums, vector<vector<int>> &ans, int pos)
{
    // Base case
    if (pos == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = pos; j < nums.size(); j++)
    {
        swap(nums[j], nums[pos]);
        calculate(nums, ans, pos + 1);
        swap(nums[j], nums[pos]);
    }
}

int main()
{
    flush;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> myvec(n);
        for (int i = 1; i <= n; i++)
        {
            myvec[i - 1] = i;
        }
        vector<vector<int>> vec;
        calculate(myvec, vec, 0);

        for (int i = 0; i < vec.size(); i++)
        {
            bool chk = true;
            for (int j = 0; j < n; j++)
            {
                if (!check(vec[i][j] - j - 1))
                {
                    chk = false;
                    break;
                }
            }
            if (chk)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << vec[i][j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// bool is_prime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
//     // Base case
//     if (index == nums.size()) {
//         ans.push_back(nums);
//         return;
//     }

//     for (int j = index; j < nums.size(); j++) {
//         swap(nums[j], nums[index]);
//         solve(nums, ans, index + 1);
//         swap(nums[j], nums[index]);
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 1; i <= n; i++) {
//             arr[i - 1] = i;
//         }
//         vector<vector<int>> perm;
//         solve(arr, perm, 0);

//         for (int i = 0; i < perm.size(); i++) {
//             bool valid = true;
//             for (int j = 0; j < n; j++) {
//                 if (!is_prime(perm[i][j] - j - 1)) {
//                     valid = false;
//                     break;
//                 }
//             }
//             if (valid) {
//                 for (int j = 0; j < n; j++) {
//                     cout << perm[i][j] << " ";
//                 }
//                 cout << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (i % 4 <= 1)
                swap(arr[i], arr[i + 2]);
        }
        if (n % 4 == 2)
        {
            swap(arr[n - 4], arr[n - 2]);
            swap(arr[n - 3], arr[n - 1]);
            swap(arr[n - 2], arr[n - 1]);
        }
        if (n % 4 == 3)
        {
            swap(arr[n - 5], arr[n - 2]);
            swap(arr[n - 5], arr[n - 4]);
            swap(arr[n - 5], arr[n - 1]);
        }
        if (n % 4 == 1)
        {
            swap(arr[n - 3], arr[n - 1]);
            swap(arr[n - 1], arr[n - 2]);
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
}