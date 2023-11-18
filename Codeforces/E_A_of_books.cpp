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
#include <unordered_map>

#define MOD 1000000007
#define ln long long int
#define pb push_back
#define ss second
#define ff first
#define vln vector<long long int>
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

bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> left(n, 0), right(n, n);

        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && a[i] <= a[s.top()])
                s.pop();

            if (s.empty())
                left[i] = 0; // minimum element
            else
                left[i] = s.top() + 1;

            s.push(i);
        }

        while (!s.empty())
            s.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && a[i] <= a[s.top()])
                s.pop();

            if (s.empty())
                right[i] = n - 1; // minimum element
            else
                right[i] = s.top() - 1;

            s.push(i);
        }

        ln max_area = 0;
        for (int i = 0; i < n; i++)
        {
            max_area = max(max_area, a[i] * (right[i] - left[i] + 1));
        }
        
        cout << max_area;
        cout << endl;
    }

    return 0;
}