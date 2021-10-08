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
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define gi greater<int>
#define all(a) a.begin(), a.end()
#define MAXN 100001
#define BLOCK 555
#define pii pair<int, int>
#define pmq priority_queue<int, vi, gi>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int32_t main()
{
    fastio();
    int q;
    cin >> q;
    map<string, int> m;
    while (q--)
    {
        int n, x;
        string s;
        cin >> n;
        cin >> s;
        map<string, int>::iterator i = m.find(s);
        if (n == 1)
        {
            cin >> x;
            if (i != m.end())
            {
                i->second += x;
            }
            else
                m.insert(make_pair(s, x));
        }
        else if (n == 2)
        {
            m.erase(s);
        }
        else if (n == 3)
        {
            if (i == m.end())
                cout << 0 << endl;
            else
                cout << i->second << endl;
        }
    }
    return 0;
}