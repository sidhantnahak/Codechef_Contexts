#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    long long int n, m, h;
    cin >> n >> m >> h;
    long long int c[n], o[m];
    for (long long int i = 0; i < n; i++)
        cin >> c[i];
    for (long long int i = 0; i < m; i++)
        cin >> o[i];
    sort(c, c + n);
    sort(o, o + m);
    long long int cEnd = n - 1;
    long long int oEnd = m - 1;
    long long int answer1 = 0;
    while (cEnd >= 0 && oEnd >= 0)
    {
        long long int capacity = c[cEnd];
        long long int outlerCap = o[oEnd];
        answer1 += min(capacity, h * outlerCap);
        cEnd--;
        oEnd--;
    }
    cEnd = 0;
    oEnd = 0;
    long long int answer2 = 0;
    while (cEnd < n && oEnd < m)
    {
        long long int capacity = c[cEnd];
        long long int outlerCap = o[oEnd];
        answer2 += min(capacity, h * outlerCap);
        cEnd++;
        oEnd++;
    }
    cout << max(answer1, answer2) << endl;

    return 0;
}