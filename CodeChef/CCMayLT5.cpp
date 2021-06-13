#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    const int N = 1e7 + 2;
    vector<int> primeNo;
    bool a[N + 1];
    memset(a, true, sizeof(a));
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i * i <= N; i++)
        if (a[i] == true)
            for (int j = i * i; j <= N; j += i)
                a[j] = false;

    for (int i = 0; i <= N; i++)
        if (a[i] == true)
            primeNo.push_back(i);

    while (t--)
    {
        int n;
        cin >> n;

        int countArrays = 1;
        // using upper_bound
        int upper1 = upper_bound(primeNo.begin(), primeNo.end(), n / 2) - primeNo.begin();
        int upper2 = upper_bound(primeNo.begin(), primeNo.end(), n) - primeNo.begin();
        if (n == 3)
            countArrays++;
        else if (n != 2)
            countArrays += upper2 - upper1;
        cout << countArrays << endl;
    }

    return 0;
}