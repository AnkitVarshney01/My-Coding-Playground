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
//     int t = 0;
//     cin >> t;
//     while (t--)
//     {
//         ln n;
//         cin >> n;
//         vln a(n);
//         map<ln, ln> mp;
//         for (ln i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mp[a[i]]++;
//         }

//         sort(all(a));
//         ln f = 1;
//         for (int i = n - 3; i >= 0; i--)
//         {
//             int sum = a[i] + a[i + 1] + a[i + 2];
//             if (mp[sum] == 0)
//             {
//                 f = 0;
//                 break;
//             }
//         }

//         if (f)
//         {
//             for (int i = n - 3; i >= 0; i--)
//             {
//                 int sum = a[n - 1] + a[i] + a[i + 1];
//                 if (mp[sum] == 0)
//                 {
//                     f = 0;
//                     break;
//                 }
//             }
//             if (f)
//             {
//                 for (int i = n - 3; i >= 0; i--)
//                 {
//                     int sum = a[n - 1] + a[n - 2] + a[i];
//                     if (mp[sum] == 0)
//                     {
//                         f = 0;
//                         break;
//                     }
//                 }
//                 if (f)
//                     cout << "YES";
//                 else
//                     cout << "NO";
//             }
//             else
//                 cout << "NO";
//         }
//         else
//             cout << "NO";
//         cout << endl;
//         continue;
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
        map<ln, ln> mp;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        if (mp.size() == 1)
        {
            if (mp[0] == n)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
            continue;
        }

        if (mp.size() >= 2)
        {
            sort(all(a));
            if (mp[0] != 0)
            {
                if ((mp[0] == n - 2 && a[0] == -a[n - 1]))
                    cout << "YES";
                else if (mp[0] == n - 1)
                    cout << "YES";
                else
                    cout << "NO";
            }
            else
            {
                if (a.size() == 4)
                {
                    ln sum1 = a[0] + a[1] + a[2];
                    ln sum2 = a[0] + a[1] + a[3];
                    ln sum3 = a[0] + a[2] + a[3];
                    ln sum4 = a[1] + a[2] + a[3];

                    if (mp[sum1] && mp[sum2] && mp[sum3] && mp[sum4])
                        cout << "YES";
                    else
                        cout << "NO";
                }
                else if (a.size() == 3)
                {
                    ln sum = a[0] + a[1] + a[2];
                    if (sum == a[0] || sum == a[1] || sum == a[2])
                        cout << "YES";
                    else
                        cout << "NO";
                }
                else
                    cout << "NO";
            }
            cout << endl;
            continue;
        }

        if (mp.size() > 3)
            cout << "NO" << endl;
    }

    return 0;
}