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
    ln n;
    cin >> n;
    map<ln, vln> mp;
    string s[n];
    for (ln i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    ln i = 0, j = 0, k = 0;
    while (i < 10)
    {
        j = 0;
        while (j < n)
        {
            for (k = 0; k < 10; k++)
            {
                if (s[j][k] - '0' == i)
                {
                    mp[i].pb(k);
                    break;
                }
            }
            j++;
        }
        sort(mp[i].begin(), mp[i].end());
        i++;
    }

    ln c[10], check[10] = {0};
    for (auto i : mp)
    {
        ln lastOc = -1;
        check[10] = {0};
        for (ln j = 0; j < i.second.size(); j++)
        {

            if (i.second[j] > lastOc)
            {
                if (check[i.second[j]] == 0)
                {
                    c[i.first] = i.second[j];
                }
                else
                {
                    c[i.first] += ;
                }
                lastOc = i.second[j];
            }
            else
            {
                if (check[i.second[j]] == 0)
                {
                    c[i.first] = i.second[j];
                }
                else
                {
                    c[i.first] += ;
                }
            }
            if (check[i.second[j]] == 0)
                check[i.second[j]]++;
        }
    }
    return 0;
}