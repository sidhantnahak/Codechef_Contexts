int n;
        cin >> n;
        int a[n + 1];
        int b[n + 1];
        fr(i, 1, n + 1)
        {
            cin >> a[i];
        }
        fr(i, 1, n + 1)
        {
            cin >> b[i];
        }
        bool f = true;
        for (int i = 1; i <= (n - 3); i++)
        {
            if (a[i] != b[i])
            {

                int num1 = a[i];
                int num2 = a[i + 1];
                int num3 = a[i + 2];
                int num4 = a[i + 3];
                a[i] = num1 + num2 + num3;
                a[i + 1] = -num3;
                a[i + 2] = -num2;
                a[i + 3] = num2 + num3 + num4;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
            {
                f = false;
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
