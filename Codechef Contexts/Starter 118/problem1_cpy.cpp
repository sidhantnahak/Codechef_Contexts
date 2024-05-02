#include <iostream>
#include <bits/stdc++.h>
#define flush ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ld long double
#define fl float
#define nl '\n'
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define forli(a, b) for (ll i = a; i < b; i++)
#define forlj(a, b) for (ll j = a; j < b; j++)
#define forri(a, b) for (int i = a; i >= b; i--)
#define forrli(a, b) for (ll i = a; i >= b; i--)
#define pb push_back
#define cy cout << "Yes" << nl
#define cn cout << "No" << nl
#define vec(name, a) vector<a> name
#define vec(name, a, n) vector<a> name(n)
#define ump(name, a, b) unordered_map<a, b> name
#define mp(name, a, b) map<a, b> name
#define set(name, a) set<a> name
#define srt(vect) sort(vect.begin(), vect.end());
#define rsrt(vect,type) sort(vect.begin(), vect.end(), greater<type>());
#define Test  int t; cin >> t; while (t--)
const int mod = 1e9 + 7;
using namespace std;

void solve()
{
    int n;cin >> n;
    vec(vec1,n);
    fori (0, 32) {
        vec1[i] = n % 2;
        n /= 2;
    }
    int res1 = 0;
    forri (31,0) {
        if (vec1[i] == 1) {
            res1 = i;
            break;
        }
    }
    int f1 = pow(2, res1);
    vec(vec2,32);
    forri (res1-1, 0) {
        if (vec1[i] == 0) {
            vec2[i] = 0;
        } else {
            vec2[i] = 1;
        }
    }
    int f2 = 0;
    forri (31,0) {
        f2 *= 2;
        f2 += vec2[i];
    }
    cout << f2 << " " << f1 << endl;
}

int main()
{
    flush;
    Test
    {
        solve();
    }
    return 0;
}