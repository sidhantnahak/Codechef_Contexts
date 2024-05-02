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
    int left, right;
    cin >> left >> right;
    if(__gcd(left,right)==1){
        fori(left+1,right+1){
            cout<<i<<" ";
        }
        cout<<left;
    }else if((right-left+1)%2==0){
        for(int i=left;i<=right,i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }else if(left%2==0 && right%2!=0){
        cout<<left+1<<" "<<left+2<<" "<<l<<" ";
        for(int i=left+3;i<=right;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }else{
        cout<<-1;
    }
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