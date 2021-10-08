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
int32_t main()
{
    fastio();
    int n;
    cin >> n;
    int maxScore = INT_MIN, maxPlayer = 0, sum1 = 0, sum2 = 0;
    vector<vector<int>> score(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> score[i][j];
        }
        sum1 += score[i][0];
        sum2 += score[i][1];
        if (maxScore < abs(sum1 - sum2))
        {
            maxScore = abs(sum1 - sum2);
            if (score[i][0] > score[i][1])
                maxPlayer = 1;
            else
                maxPlayer = 2;
        }
    }
    cout << maxPlayer << " " << maxScore;
    cout << endl;

    return 0;
}