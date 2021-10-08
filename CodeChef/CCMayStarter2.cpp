#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        char s[k][100];
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }

        bool check[k];
        int i = 0;
        for (; i < k; i++)
        {
            check[i] = 0;
            
            if (s[i][0] >= 97 && s[i][0] <= 109)
                for (int j = 0; j < strlen(s[i]); j++)
                    if (s[i][j] >= 97 && s[i][j] <= 109)
                        check[i] = 1;
                    else
                    {
                        check[i] = 0;
                        break;
                    }

            if (s[i][0] >= 78 && s[i][0] <= 90)
                for (int j = 0; j < strlen(s[i]); j++)
                    if (s[i][j] >= 78 && s[i][j] <= 90)
                        check[i] = 1;
                    else
                    {
                        check[i] = 0;
                        break;
                    }

            if (check[i] == 0)
            {
                cout << "NO" << endl;
                break;
            }
        }

        if (i == k)
            cout << "YES" << endl;
    }

    return 0;
}