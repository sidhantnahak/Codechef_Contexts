#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{

    string mystr = ":)):):(():";
    bool start = false;
    int cnt = 0, c = 0;

    for (int i = 0; i < mystr.size(); i++)
    {
        if (mystr[i] == ':')
        {
            if (c >= 1 && start == true)
            {

                cnt++;
                c = 0;
            }
            else
            {

                start = true;
            }
        }
        else if (mystr[i] == ')' && start == true)
        {

            c++;
        }
        else
        {

            start = false;
        }
    }

    return 0;
}