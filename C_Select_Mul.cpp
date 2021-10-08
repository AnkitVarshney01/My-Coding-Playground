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
int32_t main()
{
    fastio();
    string s;
    int n;
    cin >> s;
    n = stoi(s);
    cout << n << " " << s.length() << endl;

    if (s.length() == 3)
    {
        vector<int> v;
        while (n)
        {
            v.push_back(n % 10);
            n /= 10;
        }
        sort(all(v), greater<int>());
        for (int i = 0; i < 3; i++)
        {
            n = n * 10 + v[i];
        }
        cout << (n / 100) * (n % 100);
    }
    else
    {
        map<int, int> m;
        int num1 = 0, num2 = 0;
        map<int, int>::reverse_iterator it;

        while (n)
        {
            int rem = n % 10;
            m[rem]++;
            n /= 10;
        }
        int k = s.length();
        for (it = m.rbegin(); it != m.rend(); it++)
        {
            
            while (m[it->first])
            {
                if (k % 2 != 0)
                    num1 = num1 * 10 + (it->first);
                else
                    num2 = num2 * 10 + (it->first);
                m[it->first]--;
                k--;
            }
        }
        cout << num1 * num2;
    }
    return 0;
}