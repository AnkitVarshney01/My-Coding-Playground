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
    int n;
    cin >> n;
    vector<int> a;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    while()
    int min=a[0];
    std::transform(a.begin(), a.end(), min, min, std::minus<int>());

    return 0;
}