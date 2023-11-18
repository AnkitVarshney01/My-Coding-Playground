// #include <iostream>
// #include <vector>
// using namespace std;

// void path_counter(int src, int dst, int &path_count, vector<bool> &vis, vector<int> adj[])
// {
//     vis[src] = true;
//     if (src == dst)
//     {
//         path_count++;
//     }
//     else
//     {
//         for (auto j : adj[src])
//         {
//             if (!vis[j])
//                 path_counter(j, dst, path_count, vis, adj);
//         }
//     }
//     vis[src] = false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> adj[10001];
//         for (int i = 0; i < m; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }

//         int a, b, k;
//         cin >> a >> b >> k;

//         int cnt = 0;
//         vector<bool> vis(1e7, false);
//         path_counter(a, b, cnt, vis, adj);
//         cout << (cnt >= k + 1 ? "YES" : "NO") << endl;
//     }

//     return 0;
// }

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
using namespace std;

// vector<int> a(n);
// for (int i = 0; i < n; i++)
// {
//     cin >> a[i];
// }

// sort(a.begin(), a.end());

// int sum = 0;

// for (int i = 0; i < m - 1; i++)
// {
//     sum += abs(a[i] - a[i + 1]);
// }

// int prv = abs(a[0] - a[1]);

// int l = 0, r = m - 1;

// int curSum = sum;

// int i = 1, j = m;
// while (j < n)
// {
//     curSum -= prv;
//     curSum += abs(a[j] - a[j - 1]);
//     if (curSum < sum)
//     {
//         sum = curSum;
//         l = i;
//         r = j;
//     }

//     prv = abs(a[i] - a[i + 1]);
//     i++;
//     j++;
// }

// // cout << l << " " << r << endl;
// i = l, j = r;
// curSum = 0;
// int p = m - 1;
// while (i < j)
// {
//     curSum += (p * abs(a[i] - a[j]));
//     p -= 2;
//     i++, j--;
// }

// cout << curSum;

// int k;
// cin >> k;
// int n, m;
// cin >> n >> m;

// vector<vector<int>> mat(n, vector<int>(m, 0));
// for (int i = 0; i < n; i++)
//     for (int j = 0; j < m; j++)
//         mat[i][j] = k++;

// vector<vector<int>> tr(m, vector<int>(n, 0));

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < m; j++)
//     {
//         tr[j][i] = mat[i][j];
//     }
// }

// vector<vector<int>> ans(n, vector<int>(n, 0));

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         for (int k = 0; k < m; k++)
//         {
//             ans[i][j] += (mat[i][k] * tr[k][j]);
//         }
//     }
// }

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << ans[i][j] << " ";
//     }
//     cout << endl;
// }
// vector<int> sol(vector<int> &a, vector<vector<int>> &queries)
// {
//     vector<int> ans;
//     int i = 0;
//     while (i < queries.size())
//     {
//         int l = queries[i][0] - 1;
//         int r = queries[i][1] - 1;

//         int tot = 0;
//         for (int j = l; j < r; j++)
//         {
//             int cnt = 1;
//             for (int k = j + 1; k <= r; k++)
//             {
//                 if (a[j] == a[k])
//                     cnt++;
//             }

//             tot += (cnt / 2);
//         }

//         ans.push_back(tot);
//         i++;
//     }

//     return ans;
// }

// int solve(vector<int> &a, int &k)
// {
//     deque<int> q;
//     for (int i = 0; i < k; i++)
//     {
//         while (!q.empty() && a[i] <= a[q.back()])
//             q.pop_back();
//         q.push_back(i);
//     }

//     int ans = INT_MIN;
//     for (int i = k; i < a.size(); i++)
//     {
//         ans = max(ans, a[q.front()]);
//         while (!q.empty() && a[i] <= a[q.back()])
//             q.pop_back();
//         while (!q.empty() && q.front() <= i - k)
//             q.pop_front();
//         q.push_back(i);
//     }
//     ans = max(ans, a[q.front()]);

//     return ans;
// }

vector<int> findMaximums(vector<int> &nums)
{
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n, n);
    int minimum = INT_MAX;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, nums[i]);
        while (!st.empty() && nums[st.top()] >= nums[i])
        {
            int j = st.top();
            st.pop();
            right[j] = i;
        }
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    vector<int> maximums(n, minimum);
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int range = right[i] - left[i] - 1;
        maximums[range - 1] = max(maximums[range - 1], num);
    }
    for (int i = n - 2; i >= 0; i--)
        maximums[i] = max(maximums[i], maximums[i + 1]);
    return maximums;
}

int main()
{
    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }

    vector<int> maximums = findMaximums(a);
    int i = 0;
    int ans = INT_MIN;
    while (i < q)
    {
        int k = queries[i];

        cout << maximums[k - 1] << endl;
        i++;
    }

    return 0;
}