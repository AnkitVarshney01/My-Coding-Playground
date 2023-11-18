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

struct seeds
{
    ln no;
    ln dead;
    ln profit;
};

bool sortCol(const seeds &v1, const seeds &v2)
{
    return v1.dead < v2.dead;
}

struct cm
{
    bool operator()(seeds const &a, seeds const &b)
    {
        return a.profit < b.profit;
    }
};

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    int count = 1;
    while (t--)
    {
        ln d, n, x;
        cin >> d >> n >> x;
        vector<seeds> s(n);
        for (ln i = 0; i < n; i++)
        {
            ln N, D, P;
            cin >> N >> D >> P;
            s[i].no = N;
            s[i].dead = D;
            s[i].profit = P;
        }

        sort(all(s), sortCol);
        priority_queue<seeds, vector<seeds>, cm> pq;

        ln p = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int slot = 0;

            if (i == 0)
                slot = s[i].dead;
            else
                slot = s[i].dead - s[i - 1].dead;

            pq.push(s[i]);

            while (slot && !pq.empty())
            {
                slot--;
                if (pq.top().dead)
                    p += (pq.top().profit * pq.top().no);
                pq.pop();
            }
        }

        cout << "Case #" << count++ << ": " << p;
        cout << endl;
    }

    return 0;
}