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
        vector<string> s(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        ln sum = 0, c = 0;
        bool f = false;
        for (char i = 'a'; i < 'l'; i++)
        {
            for (char j = 'a'; j < 'l'; j++)
            {
                for (ln k = 0; k < n; k++)
                {
                    if (i == s[k][0] && j == s[k][1] && f == false)
                    {
                        f = true;
                    }

                    if (i == s[k][0] && j == s[k][1] && f == true)
                        c++;

                    if (f == true)
                    {
                        if ((i == s[k][0] && j != s[k][1]) || (j == s[k][1] && i != s[k][0]))
                        {
                            sum += c;
                        }
                    }
                }
                f = false;
                c = 0;
            }
        }

        cout << sum;
        cout << endl;
    }

    return 0;
}