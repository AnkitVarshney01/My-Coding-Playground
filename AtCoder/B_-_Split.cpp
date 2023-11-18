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
    string s;
    cin >> s;

    if (s[0] == '1')
        cout << "No";
    else
    {
        int t[7] = {1, 1, 1, 1, 1, 1, 1};
        if (s[6] == '0')
            t[0] = 0;
        if (s[3] == '0')
            t[1] = 0;
        if (s[1] == '0' && s[7] == '0')
            t[2] = 0;
        if (s[0] == '0' && s[4] == '0')
            t[3] = 0;
        if (s[2] == '0' && s[8] == '0')
            t[4] = 0;
        if (s[5] == '0')
            t[5] = 0;
        if (s[9] == '0')
            t[6] = 0;

        int i = 0, j = 6;
        while (i < 7 && t[i] != 1)
        {
            i++;
        }
        while (j >= 0 && t[j] != 1)
        {
            j--;
        }

        bool f = 0;
        while (i < j)
        {
            if (t[i] == 0)
                f = 1;
            i++;
        }

        if (f)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}