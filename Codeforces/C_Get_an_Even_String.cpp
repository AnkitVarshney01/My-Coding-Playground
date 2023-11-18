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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ln sum = 0, pr = 0;
        unordered_map<char, int> mp1, mp2;
        for (ln i = 0; i < s.length(); i++)
        {
            mp1[s[i]]++;
        }

        ln i = 1;
        while (i < s.length())
        {
            if (s[i] == s[i - 1])
            {
                if (i + 2 == s.length())
                    sum++;
                i += 2;
                pr++;
            }
            else if (mp2[s[i]] % 2 != 0)
            {
                mp2[s[i]]++;
                i += 2;
                pr++;
            }
            else
            {
                mp2[s[i - 1]]++;
                mp2[s[i]]++;

                sum++;
                i++;
            }
        }

        if (pr == 0)
            sum++;

        cout << sum;

        // for (auto i : mp1)
        // {
        //     if (i.ss % 2 != 0)
        //         sum++;
        // }

        cout << endl;
    }

    return 0;
}