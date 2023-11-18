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
    string t;
    cin >> t;

    int i = 0, j = 0;
    bool f = 1;
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            f = 0;
            break;
        }
    }

    if (!f || (i != s.length() && j == t.length()))
        cout << "No";
    else
        cout << "Yes";

    return 0;
}