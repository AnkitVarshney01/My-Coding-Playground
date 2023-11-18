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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int i = 0, c = 0, x, im;

        while (i < s.length())
        {
            x = (10 - (s[i] - '0')) % 10;
            im = k / 10;
            if (k < 10 && x > k)
                break;
            else if (k < 10 && x < k)
            {
                k = x;
                c++;
            }
            else
            {
                if (x > k % 10)
                    k = x + ((im - 1) * 10);
                else
                    k = x + (im * 10);
                c++;
            }
            i++;
        }

        cout << c;
        cout << endl;
    }

    return 0;
}