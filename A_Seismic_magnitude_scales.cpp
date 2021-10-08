#include <iostream>
using namespace std;

#define int long long
int32_t main()
{
    int a, b;
    cin >> a >> b;
    int k = a - b;
    int ans = 32;
    while (k > 1)
    {
        ans *= 32;
        k--;
    }
    if (a == b)
        cout << 1;
    else
        cout << ans;
    return 0;
}