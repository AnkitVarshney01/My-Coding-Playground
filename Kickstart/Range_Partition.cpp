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
    ln count = 1;
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, x, y;
        cin >> n >> x >> y;

        ln firstNSum = (n * (n + 1)) / 2;
        ln tempX = x, tempY = y;
        ln i = 2, f = 0;
        // while (tempX + tempY <= firstNSum)
        // {
        //     if (firstNSum - tempX == tempY)
        //     {
        //         f = 1;
        //         break;
        //     }
        //     else
        //     {
        //         tempX = x * i;
        //         tempY = y * i;
        //         i++;
        //     }
        // }
        if (firstNSum % (x + y) == 0)
        {
            tempX = ((firstNSum / (x + y)) * x);
            f = 1;
        }

        if (f == 0)
            cout << "Case #" << count++ << ": IMPOSSIBLE" << endl;
        else
        {

            vln ans;
            i = n;
            if (tempX > n)
                while (tempX > 0)
                {
                    if (tempX >= i)
                    {
                        ans.pb(i);
                        tempX -= i;
                        i--;
                    }
                    else
                    {
                        ans.pb(tempX);
                        tempX = 0;
                    }
                }
            else
                ans.pb(tempX);

            cout << "Case #" << count++ << ": POSSIBLE" << endl;
            cout << ans.size() << endl;
            for (ln i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}