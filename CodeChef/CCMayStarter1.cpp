#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;

        int minTime = min(x * m, x + d);
        cout << minTime << endl;
    }

    return 0;
}