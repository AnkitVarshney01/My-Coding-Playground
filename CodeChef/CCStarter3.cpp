#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int l[k + 1];
        for (int i = 1; i <= k; i++)
        {
            cin >> l[i];
        }
        l[0] = 0;
        if (k == 1 && n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            const int N = 1e6 + 2;
            int userAttempts[N];
            for (int i = 0; i < N; i++)
            {
                userAttempts[i] = 0;
            }
            for (int i = 0; i <= k; i++)
            {
                userAttempts[l[i]]++;
            }
            int disqualifiedUsers = 0;
            for (int i = 1; i <= n; i++)
            {
                if (userAttempts[i] > 1)
                {
                    disqualifiedUsers++;
                }
            }
            cout << disqualifiedUsers << " ";
            for (int i = 1; i <= n; i++)
            {
                if (userAttempts[i] > 1)
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}