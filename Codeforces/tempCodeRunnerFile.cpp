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
    int p = 1000001;
    int seq[1000001];
    for (int i = 0; i < p; i++)
    {
        seq[i] = 0;
    }

    int n;
    cout<<"Enter n: ";
    cin >> n;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        seq[arr[i]] = 1;
    }

    int count = 0, max = -1;
    for (int i = 0; i < p; i++)
    {
        if (seq[i] == 1)
            count++;
        else
            count = 0;

        if (max < count)
            max = count;
    }
    cout << count;
    return 0;
}