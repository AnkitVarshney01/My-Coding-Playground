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

#define int long long
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] > v2[1];
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        vector<vector<int>> player(n, vector<int>(2));
        player.resize(n);
        int countQualPlay = 0;
        vector<int> index;
        int i = 0;
        for (; i < n; i++)
        {
            player[i][0] = i + 1;
            cin >> player[i][1];
            if (player[i][1] >= m)
            {
                index.push_back(i + 1);
                x--;
                countQualPlay++;
            }
        }
        sort(player.begin(), player.end(), sortcol);
        i = 0;
        while (i < n && x > 0)
        {

            if (player[i][1] >= m)
            {
                i++;
                continue;
            }
            index.push_back(player[i][0]);
            countQualPlay++;
            x--;
            i++;
        }

        sort(index.begin(), index.end());
        cout << countQualPlay << " ";
        for (int i = 0; i < index.size(); i++)
        {
            cout << index[i] << " ";
        }

        cout << endl;
    }

    return 0;
}