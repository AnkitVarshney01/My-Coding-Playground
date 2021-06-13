#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int stations[n + 1];
        stations[0] = 0;
        int passengers[m + 1];
        passengers[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> stations[i];
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> passengers[i];
        }

        int distFrom1[n + 1];
        int distFrom2[n + 1];
        for (int i = 1; i <= n; i++)
        {
            distFrom1[i] = INT_MAX;
            distFrom2[i] = INT_MAX;
        }

        int first1 = 0;
        int first2 = 0;

        int i = 1;
        for (; i <= n; i++)
        {
            if (stations[i] == 1)
            {
                first1 = i;
                break;
            }
        }
        if (i > n)
            first1 = i;

        i = n;
        for (; i >= 1; i--)
        {
            if (stations[i] == 2)
            {
                first2 = i;
                break;
            }
        }
        if (i < 1)
            first2 = 0;

        int j = 0;
        for (int k = first1; k <= n; k++)
        {
            if (stations[k] == 1)
            {
                distFrom1[k] = 0;
                j = 0;
            }
            else
                distFrom1[k] = ++j;
        }

        j = 0;
        for (int k = first2; k >= 1; k--)
        {
            if (stations[k] == 2)
            {
                distFrom2[k] = 0;
                j = 0;
            }
            else
                distFrom2[k] = ++j;
        }

        for (int k = 1; k <= n; k++)
        {
            distFrom2[k] = min(distFrom1[k], distFrom2[k]);
            if (distFrom2[k] == INT_MAX)
                distFrom2[k] = -1;
        }

        for (int k = 1; k <= m; k++)
        {
            if (stations[1] == 0 && passengers[k] == 1)
                cout << 0 << " ";
            else
                cout << distFrom2[passengers[k]] << " ";
        }
        cout << endl;
    }
    return 0;
}