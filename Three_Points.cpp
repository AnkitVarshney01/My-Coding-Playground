#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <stdlib.h>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <random>
#include <numeric>
#include <iomanip>
#include <chrono>
#include <cmath>
#include <cassert>
#include <array>

#define int long long
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xc >> yc;

        int ab2 = (((xa - xb) * (xa - xb)) + ((ya - yb) * (ya - yb)));
        int bc2 = (((xb - xc) * (xb - xc)) + ((yb - yc) * (yb - yc)));
        int ac2 = (((xa - xc) * (xa - xc)) + ((ya - yc) * (ya - yc)));

        if ((xa == xb && yb == yc) || (ya == yb && xb == xc))
            cout << "YES" << endl;
        else if (ya - yb == 0 && yb - yc == 0 && ((xa > xb && xb > xc) || (xa < xb && xb < xc)))
            cout << "YES" << endl;
        else if (xa - xb == 0 && xb - xc == 0 && ((ya > yb && yb > yc) || (ya < yb && yb < yc)))
            cout << "YES" << endl;
        else if (xa - xb == 0 && ((ya > yb && yb > yc) || (ya < yb && yb < yc)))
            cout << "YES" << endl;
        else if (yc - yb == 0 && ((xa > xb && xb > xc) || (xa < xb && xb < xc)))
            cout << "YES" << endl;
        else if (ya == yb && ((xa > xb && xb > xc) || (xa < xb && xb < xc)))
            cout << "YES" << endl;
        else if (xb == xc && ((ya > yb && yb > yc) || (ya < yb && yb < yc)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}