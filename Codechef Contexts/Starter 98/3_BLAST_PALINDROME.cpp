#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void check(string str)
{
    int len = str.size();

    if (len % 3 == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        int f = len, l = -1;

        for (int j = 0; j < len; j++)
        {
            if ((str[j] - 'a') == i && j % 3 == 0)
            {
                f = j;
                break;
            }
        }

        for (int k = len - 1; k >= 0; k--)
        {
            if ((str[k] - 'a') == k && (len - k - 1) % 3 == 0)
            {
                l = k;
                break;
            }
        }

        if (f <= l)
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int main()
{
    string str = "ajfkdjfaykut";
    check(str);

    return 0;
}