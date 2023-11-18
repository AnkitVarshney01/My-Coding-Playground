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
        vector<vector<string>> inp(3, vector<string>(n));
        unordered_map<string, int> mp1, mp2, mp3;
        for (ln j = 0; j < 3; j++)
        {
            for (ln i = 0; i < n; i++)
            {
                string s;
                cin >> s;
                // inp[j].push_back(s);
                if (j == 0)
                    mp1[s]++;
                else if (j == 1)
                    mp2[s]++;
                else
                    mp3[s]++;
            }
        }

        ln p1 = 0, p2 = 0, p3 = 0;

        for (auto i : mp1)
        {
            if (mp2[i.first] && mp3[i.first])
            {
                mp2[i.ff] = 0;
                mp3[i.ff] = 0;
                continue;
            }

            if (mp2[i.first] != 0)
            {
                p1++;
                p2++;
                mp2[i.ff] = 0;
            }
            else if (mp3[i.ff] != 0)
            {
                p1++;
                p3++;
                mp3[i.ff] = 0;
            }
            else
            {
                p1 += 3;
            }
        }

        for (auto i : mp2)
        {
            if (mp2[i.ff] != 0)
            {
                if (mp3[i.ff] != 0)
                {
                    p2++;
                    p3++;
                    mp3[i.ff] = 0;
                }
                else
                {
                    p2 += 3;
                }
            }
        }

        for (auto i : mp3)
        {
            if (mp3[i.ff] != 0)
                p3 += 3;
        }

        cout << p1 << " " << p2 << " " << p3;
        cout << endl;
    }

    return 0;
}