#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        int startColumn = 1 + (y1 * (y1 - 1) / 2);
        int startColumn2 = 3 + (y1 * (y1 + 1) / 2) - 1;
        int j = y1 + 1;
        for (int i = 1; i < x1; i++)
            startColumn += j++;
    }

    return 0;
}