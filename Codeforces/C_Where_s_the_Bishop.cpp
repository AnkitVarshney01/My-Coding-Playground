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
#include <conio.h>

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
        // string c;
        // getline(cin, c);
        char chess[8][8];
        ln count[8] = {0};
        for (ln i = 0; i < 8; i++)
        {
            for (ln j = 0; j < 8; j++)
            {
                cin >> chess[i][j];
                if (chess[i][j] == '#')
                    count[i]++;
            }
        }

        // for (ln i = 0; i < 8; i++)
        // {
        //     cout << count[i] << " ";
        // }

        ln x = -1;
        for (ln i = 1; i < 7; i++)
        {
            if (count[i - 1] == 2 && count[i] == 1 && count[i + 1] == 2)
                x = i;
        }

        ln y = -1;
        for (ln i = 0; i < 8; i++)
        {
            if (chess[x][i] == '#')
                y = i;
        }

        cout << x + 1 << " " << y + 1;
        cout << endl;
    }

    return 0;
}