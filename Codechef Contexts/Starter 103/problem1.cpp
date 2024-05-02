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

void solve()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;

    ll num;
    string l_three_digit;
    if (n == 1)
        cout << 8 << nl;

    else
    {
        if (n >= 3)
            l_three_digit = str.substr(n - 3, 3);
        else
            l_three_digit = str;
        if (n >= 3)
            num = stoll(l_three_digit);
        else
            num = stoll(str);
        if (num % 8 == 0)
        {
            cout << str << nl;
        }

        else
        {
            ll rem = num % 8;

            if (num % 10 >= rem)
            {
                num -= rem;
            }

            else
            {
                num += 8 - rem;
            }

            string ans = "";
            if (n >= 3)
                ans += str.substr(0, n - 3);
            string get_value = to_string(num);
            reverse(get_value.begin(), get_value.end());
            while (get_value.size() != l_three_digit.size())
            {
                get_value += '0';
            }
            reverse(get_value.begin(), get_value.end());
            ans += get_value;
            cout << ans << nl;
        }
    }
}
int main()
{

    flush;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// #define pb push_back
// #define endl "\n"
// #define vi vector<int>
// #define pii pair<int,int>
// #define sz(x) ((int) x.size())
// #define all(p) p.begin(), p.end()
// #define yes() cout<<"YES"<<endl
// #define no() cout<<"NO"<<endl
// #define rep(i, l, r) for(int i = l; i<r; i++)
// #define vvi vector<vector<int>>
// #define INF LLONG_MAX
// #define ff first
// #define ss second
// #define print(a) for(auto x : a) cout << x << " "; cout << endl
// #define ppb pop_back
// #define float double
// #define double long double
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// int32_t main(){
//     fastio();
//    
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int val;
//         string temp1;
//         if (n == 1) cout << 8 << endl;

//         else{
//             if (n >= 3)
//                 temp1 = s.substr(n-3, 3);
//             else
//                 temp1 = s;
//             if (n>=3)
//                 val = stoll(temp1);
//             else
//                 val = stoll(s);
//             if (val % 8 == 0){ 
//                 cout << s << endl;
//             }

//             else{
//                 int rem = val % 8;

//                 if (val % 10 >= rem){
//                     val -= rem;
//                 }

//                 else{
//                     val += 8-rem;
//                 }

//                 string str = "";
//                 if (n>=3)
//                     str += s.substr(0, n-3);
//                 string temp = to_string(val);
//                 reverse(all(temp));
//                 while (temp.size() != temp1.size()){
//                     temp += '0';
//                 }
//                 reverse(all(temp));
//                 str += temp;
//                 cout << str << endl;
//             }
//         }
//     }

//     return 0;
// }