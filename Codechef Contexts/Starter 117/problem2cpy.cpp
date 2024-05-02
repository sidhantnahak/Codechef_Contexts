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
   int n;cin>>n;
   vec(vec1,int,n);
   for(auto &i:vec1)cin>>i;
   if(n==1 || n==2){
    cout<<-1<<nl;
    return;
   }

    int val1 = -1, val2 = -1;
    fori (0,N) {
        if (vec1[i] == 1) {
            val1 = i;
        } else if (vec1[i] == 3) {
            val2 = i;
        }
    }
    swap(vec1[val1], vec1[val2]);

    for(auto &v:vec1)cout<<v<<" ";
    cout<<nl;

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