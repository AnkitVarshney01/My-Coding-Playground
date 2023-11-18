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
    char mt[t][t];

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin >> mt[i][j];
        }
    }

    bool f = 1;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (i == j)
                continue;

            if (mt[i][j] == 'W' && (mt[j][i] == 'W' || mt[j][i] == 'D'))
            {
                f = 0;
                break;
            }
            else if (mt[i][j] == 'L' && (mt[j][i] == 'L' || mt[j][i] == 'D'))
            {
                f = 0;
                break;
            }
            else if (mt[i][j] == 'D' && (mt[j][i] == 'L' || mt[j][i] == 'W'))
            {
                f = 0;
                break;
            }
        }
        if (!f)
            break;
    }

    if (f)
        cout << "correct";
    else
        cout << "incorrect";

    return 0;
}