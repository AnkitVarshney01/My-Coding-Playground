// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <climits>
// #include <vector>
// #include <stdlib.h>
// #include <map>
// #include <queue>
// #include <stack>
// #include <set>
// #include <functional>
// #include <random>
// #include <numeric>
// #include <iomanip>
// #include <chrono>
// #include <cmath>
// #include <cassert>
// #include <array>
// #include <unordered_map>

// #define MOD 1000000007
// #define ln long long int
// #define pb push_back
// #define ss second
// #define ff first
// #define vln vector<long long int>
// #define gi greater<int>
// #define all(a) a.begin(), a.end()
// #define MAXN 100001
// #define BLOCK 555
// #define pii pair<int, int>
// #define pmq priority_queue<int, vi, gi>
// using namespace std;

// void fastio()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
// {
//     return v1[0] < v2[0];
// }

// int main()
// {
//     fastio();
// int t = 0;
// cin >> t;
// while (t--)
// {
//     ln n;
//     cin >> n;
//     vln a(n);
//     for (ln i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     ln i = n - 1;
//     while (a[i] == 0)
//     {
//         i--;
//     }
//     vln ans(n, 0);
//     ln f = 0;
//     while (i > 0)
//     {
//         ln dif = a[i] - ans[i];
//         if (dif >= 0)
//         {
//             cout << "No";
//             f = 1;
//             break;
//         }

//         ans[i] += dif;
//         ans[i - 1] -= dif;
//         i--;
//     }
//     if (f)
//     {
//         cout << endl;
//         continue;
//     }
//     if (ans == a)
//         cout << "Yes";
//     else
//         cout << "No";
//     cout << endl;
// }

// return 0;
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
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ln i = n - 1;
        while (a[i] == 0)
        {
            i--;
        }

        ln f = 0;
        ln curr = 0;
        while (i > 0)
        {
            curr -= a[i];

            if (curr >= 0)
            {
                cout << "No";
                f = 1;
                break;
            }
            i--;
        }

        if (f)
        {
            cout << endl;
            continue;
        }
        if (!i || (n == 1 && a[0] == 0))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }

    return 0;
}