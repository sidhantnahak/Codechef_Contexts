#include <iostream>
using namespace std;
const int mod = 1e9 + 7;

bool isvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

#define ll long long
ll mul(ll x, ll y)
{
    ll res = x * y;
    return (res >= mod ? res % mod : res);
}
// int main()
// {

//     string str = "babylonianghhio";
//     int n = str.length();
//     int k = 2;

//     int vowel_cnt = 0, last_index = -1, ans = 1;
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (isvowel(str[i]))
//         {

//             if (vowel_cnt == 0 && last_index != -1)
//             {
//                 cout << "i " << i << " and "
//                      << "lastindex" << last_index << endl;

//                 ans = (ans * (i - last_index)) % mod;
//             }
//             vowel_cnt++;

//             if (vowel_cnt == k)
//             {
//                 last_index = i;
//                 vowel_cnt = 0;
//             }
//         }
//         else if (vowel_cnt == k)
//         {
//             c++;
//         }
//     }
//     // cout << c << endl;

//     cout << ans;

//     return 0;
// }

int main()
{

    string str = "aeiou";

    ll vc = 0;
    ll res = 1;
    ll p = 0, d = 0;
    string mystr = "babylonianghhio";
    int n = mystr.length(), k = 2;

    for (int i = 0; i < n; i++)
    {
        if (d != k)
        {
            if (str.find(mystr[i]) != string::npos)
                d++;

            continue;
        }

        if (str.find(mystr[i]) != string::npos && d == k)
        {

            res = (res*(p+1))%mod;
            p = 0;
            d = 0;
            d++;
        }
        else
        {
            p++;
        }
    }
    cout << res;
}