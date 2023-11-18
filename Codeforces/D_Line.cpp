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
        string s;
        cin >> s;

        string t = "";
        for (ln i = 0; i < n; i++)
        {
            if (i < n / 2)
                t += 'R';
            else
                t += 'L';
        }

        ln cnt[n] = {0};
        ln sum = 0;
        for (ln i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                cnt[i] = n - 1 - i;
            else
                cnt[i] = i;

            sum += cnt[i];
        }

        ln i = 0, mxId = 0;
        while (i < n)
        {
            if (s == t)
            {
                cout << sum << " ";
                i++;
                continue;
            }

            ln k = i + 1;
            if (i < n / 2)
            {
                ln j = mxId;

                while (j < n / 2 && k > 0)
                {
                    if (s[j] == 'L')
                    {
                        sum -= cnt[j];
                        cnt[j] = n - 1 - j;
                        sum += cnt[j];
                        s[j] = 'R';
                    }

                    j++;
                    k--;
                }

                if (k > 0)
                {
                    while (j < n && k > 0)
                    {
                        if (s[j] == 'R')
                        {
                            sum -= cnt[j];
                            cnt[j] = j;
                            sum += cnt[j];
                            s[j] = 'L';
                        }

                        j++;
                        k--;
                    }
                }

                mxId = max(mxId, j);
            }
            else
            {
                ln j = mxId;
                while (j < n && k > 0)
                {
                    if (s[j] == 'R')
                    {
                        sum -= cnt[j];
                        cnt[j] = j;
                        sum += cnt[j];
                        s[j] = 'L';
                    }

                    j++;
                    k--;
                }
                mxId = max(mxId, j);
            }

            cout << sum << " ";

            i++;
        }

        cout << endl;
    }

    return 0;
}