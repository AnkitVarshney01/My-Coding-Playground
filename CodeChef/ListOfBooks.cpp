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

    int m;
    cin >> m;
    vector<int> list;
    list.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> list[i];
    }

    int n;
    cin >> n;
    vector<int> borrow;
    borrow.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> borrow[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << list[borrow[i] - 1] << endl;
        list.erase(list.begin() + borrow[i] - 1);
    }

    return 0;
}