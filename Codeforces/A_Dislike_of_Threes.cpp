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
    int arr[1000];
    int l = 1;
    for (int i = 0; i < 1000; )
    {
        if (l % 3 != 0 && l % 10 != 3)
        {
            arr[i++] = l;
        }
        l++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << arr[k - 1];
        cout << endl;
    }

    return 0;
}