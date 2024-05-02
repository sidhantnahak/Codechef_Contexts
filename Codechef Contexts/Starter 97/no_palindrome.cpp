#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{

    double n = 3, k = 2;

    double ans = 0;

    auto CL = [&](int a, int b)
    {
        return (a + b - 1) / b;
    };
    double div = (3 * k + 3) / 2;
    ans += ceil(n / div);
    ans += ceil((n - k - 1) / div) * 2;

    cout << ans << endl;

    return 0;
}