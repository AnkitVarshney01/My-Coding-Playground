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

void sieveOfEratosthenes(vector<int> &arr, int n)
{
    bool prime[10000] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    int j = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            arr[j++] = i;
        }
    }
}

int32_t main()
{
    fastio();
    vector<int> primeNo(1000, 0);
    sieveOfEratosthenes(primeNo, 1000);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        int i = 0;
        while (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
        {
            i++;
        }
        if (s[i] != '\0')
        {
            cout << 1 << endl
                 << s[i] << endl;
            continue;
        }

        char ans[3];
        ans[2] = '\0';
        ans[0] = s[0];
        ans[1] = s[1];
        int flag=0;
        vector<int>::iterator lower;
        lower = find(primeNo.begin(),primeNo.end(),stoi(ans));
        if (lower!=primeNo.end())
        {
            flag=1;
        }
        else
        {
            cout << 2 << endl
                 << stoi(ans) << endl;
            continue;
        }

        ans[0] = s[0];
        ans[1] = s[2];
        lower = find(primeNo.begin(), primeNo.end(), stoi(ans));
        if (lower != primeNo.end())
        {
            flag = 1;
        }
        else
        {
            cout << 2 << endl
                 << stoi(ans) << endl;
            continue;
        }

        ans[0] = s[1];
        ans[1] = s[2];
        lower = find(primeNo.begin(), primeNo.end(), stoi(ans));
        if (lower != primeNo.end())
        {
            flag = 1;
        }
        else
        {
            cout << 2 << endl
                 << stoi(ans) << endl;
            continue;
        }
    }

    return 0;
}