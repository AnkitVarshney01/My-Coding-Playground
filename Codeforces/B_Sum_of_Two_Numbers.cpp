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
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2;
        else
        {
            ln m = n / 2;
            n -= m;
            ln tm = m;
            ln mul = 1;
            while (tm % 10 == 9)
            {
                m -= (4 * mul);
                n += (4 * mul);
                mul *= 10;
                tm /= 10;
            }

            ln sumn = 0, summ = 0;
            tm = m;
            ln tn = n;
            while (tm || tn)
            {
                sumn += (tn % 10);
                summ += (tm % 10);
                tn /= 10;
                tm /= 10;
            }
            if (abs(sumn - summ) == 1)
                cout << n << " " << m;
            else
            {
                ln dif = abs(sumn - summ);
                ln add = dif / 2;
                // cout << dif << " " << add << endl;
                n += add;
                m -= add;
                cout << n << " " << m;
            }
        }
        cout << endl;
    }

    return 0;
}