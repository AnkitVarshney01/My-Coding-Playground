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

const ln MAX = 1000001;

ln factor[MAX] = {0};

void generatePrimeFactors()
{
    factor[1] = 1;
    for (ln i = 2; i < MAX; i++)
        factor[i] = i;
    for (ln i = 4; i < MAX; i += 2)
        factor[i] = 2;

    for (ln i = 3; i * i < MAX; i++)
    {
        if (factor[i] == i)
        {
            for (ln j = i * i; j < MAX; j += i)
            {
                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}

long long int calculateNoOfFactors(ln n)
{
    if (n == 1)
        return 1;

    ln ans = 1;

    ln dup = factor[n];

    ln c = 1;

    ln j = n / factor[n];

    while (j != 1)
    {
        if (factor[j] == dup)
            c += 1;

        else
        {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }

        j = j / factor[j];
    }

    ans = ans * (c + 1);

    return ans;
}

int main()
{
    fastio();
    generatePrimeFactors();

    ln n;
    cin >> n;

    vln a(n + 1);
    for (ln i = 0; i < n + 1; i++)
    {
        a[i] = i * i;
    }

    for (ln i = 1; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    ln sum = 0;
    for (ln i = 1; i < a.size(); i++)
    {
        ln x = calculateNoOfFactors(a[i]);
        cout << x << " ";
        if (x % 2 == 0)
            sum += (x / 2);
        else
            sum += ((x + 1) / 2);
    }
    cout << endl;
    cout << sum;
    return 0;
}
