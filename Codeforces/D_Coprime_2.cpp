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

// #define int long long
// #define MOD 1000000007
// #define int long long
// #define pb push_back
// #define ss second
// #define ff first
// #define vi vector<int>
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

// void sieveOfEratosthenes(int m, int a[], int n)
// {
//     bool prime[1000000] = {0};

//     // for (int i = 2; i <= m; i++)
//     // {
//     //     if (prime[i] == 0)
//     //     {
//     //         for (int j = i * i; j <= m; j += i)
//     //         {
//     //             prime[j] = 1;
//     //         }
//     //     }
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         prime[a[i]] = 1;
//         int spf[150];
//         for (int j = 2; j <= a[i]; j++)
//         {
//             spf[j] = j;
//         }

//         for (int j = 2; j <= a[i]; j++)
//         {
//             if (spf[j] == j)
//             {
//                 for (int k = j * j; k <= a[i]; k += j)
//                 {
//                     if (spf[k] == k)
//                     {
//                         spf[k] = j;
//                     }
//                 }
//             }
//         }

//         while (a[i] != 1)
//         {
//             prime[spf[a[i]]] = 1;
//             // cout << spf[n] << " ";
//             a[i] /= spf[a[i]];
//         }
//     }

//     int count = 0;
//     for (int i = 2; i <= m; i++)
//     {
//         if (prime[i] == 0)
//         {
//             count++;
//             // cout << i << " ";
//         }
//     }
//     cout << count + 1 << endl
//          << 1 << endl;
//     for (int i = 2; i <= m; i++)
//     {
//         if (prime[i] == 0)
//         {
//             cout << i << endl;
//         }
//     }
// }

// int32_t main()
// {
//     fastio();

//     int n, m;
//     cin >> n >> m;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sieveOfEratosthenes(m, a, n);
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

#define int long long
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}

int32_t main()
{
    fastio();
    int n, m;
    cin >> n >> m;
    vi ans;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        int x;
        for (int j = 0; j < n; j++)
        {
            x = gcd(i, a[j]);
            if (x != 1)
            {
                break;
            }
        }
        if (x == 1)
        {
            ans.pb(i);
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}