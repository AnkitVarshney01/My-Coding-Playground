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
        string s;
        cin >> s;
        string t = s;
        bool car = 0;

        ln idx = 0;
        for (ln i = 0; i < s.length(); i++)
        {
            if (s[i] >= '5')
            {
                idx = i;
                car = 1;
                break;
            }
        }

        for (ln i = idx; i < s.length(); i++)
            s[i] = '0';

        for (ln i = idx - 1; i >= 0; i--)
        {
            if (car && s[i] != '9')
            {
                s[i]++;
                if (s[i] >= '5')
                {
                    s[i] = '0';
                    car = 1;
                }
                else
                    car = 0;
            }
        }

        if (car)
        {
            reverse(all(s));
            s += '1';
            reverse(all(s));
        }

        if (t.length() < s.length())
            cout << s;
        else
        {
            if (t < s)
                cout << s;
            else
                cout << t;
        }

        cout << endl;
    }

    return 0;
}