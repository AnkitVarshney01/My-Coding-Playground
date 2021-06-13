#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007

int powerCalculate(int x,int n)
{
    int base = x, prod = 1;
    int p1 = n;
    while (p1)
    {
        if (p1 % 2 == 1)
        {
                prod = (prod * base) % mod;
        }
        base = ((base % mod) * (base % mod)) % mod;
        p1 /= 2;
    }
    return prod;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int nCalculate = powerCalculate(2,n) - 1;
        int ans = powerCalculate(nCalculate,m);
        cout << ans << endl;
    }

    return 0;
}
