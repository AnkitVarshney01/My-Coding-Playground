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
#define gi greater<ln>
#define all(a) a.begin(), a.end()
#define MAXN 100001
#define BLOCK 555
#define pii pair<int, int>
#define pmq priority_queue<ln, vln, gi>
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
        ln n, m;
        cin >> n >> m;

        map<ln, ln> mp;
        vln w(m);
        for (ln i = 0; i < m; i++)
        {
            cin >> w[i];
            mp[w[i]]++;
        }

        ln ans = 0, mx = INT_MIN;

        pmq p;
        ln sp = n - mp.size();
        for (auto i : mp)
        {
            p.push(i.ss);
        }

        ln hrs = p.top();
        p.pop();
        sp++;
        while (!p.empty())
        {
            ln x = p.top() - hrs;
            if (x <= 0)
                p.pop();
            else if(x<=sp)
            {
                if (x > 2)
                {
                    while (x > 0)
                    {
                        x -= 2;
                        if (x / sp == 0)
                        {
                            hrs += 2;
                            x = 0;
                        }
                        else
                        {
                            hrs += ((x / sp) * 2);
                            x %= sp;
                        }
                    }
                }
                else
                    hrs += x;
            }
            sp++;
        }

        cout << hrs;
        cout << endl;
    }

    return 0;
}