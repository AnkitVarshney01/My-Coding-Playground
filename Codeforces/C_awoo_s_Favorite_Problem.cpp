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
        string s, t;
        cin >> s >> t;

        ln i = 0;
        while (i < n)
        {
            if (s[i] != t[i])
            {
                if (s[i] == 'a' && t[i] == 'b')
                {
                    ln j = i + 1;
                    while (s[i] == s[j])
                        j++;

                    if (j < n && s[j] == t[i])
                        swap(s[i], s[j]);
                    else
                        break;
                }
                else if (s[i] == 'b' && t[i] == 'c')
                {
                    ln j = i + 1;
                    while (s[i] == s[j])
                        j++;

                    if (j < n && s[j] == t[i])
                        swap(s[i], s[j]);
                    else
                        break;
                }
                else
                    break;
            }
            i++;
        }

        if (s == t)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}