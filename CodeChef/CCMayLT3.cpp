#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int firstTurnSum = 0;
        int secondTurnSum = 0;

        sort(a, a + n);
        if (n == 3)
        {
            if (a[n - 1] > (a[0] + a[1]))
                firstTurnSum = a[n - 1];
            else
                firstTurnSum = a[0] + a[1];
            cout << firstTurnSum << endl;
        }
        else
        {
            int i = n - 1;
            int j = n - 2;
            while (k > 0)
            {
                if (i >= 2)
                {
                    firstTurnSum += a[i];
                    i -= 2;
                }
                if (j >= 1)
                {
                    secondTurnSum += a[j];
                    j -= 2;
                }
                k--;
            }
            j++;
            secondTurnSum += a[j];
            int maxCost = max(firstTurnSum, secondTurnSum);
            cout << maxCost << endl;
        }
    }

    return 0;
}