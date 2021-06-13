#include<iostream>
using namespace std;
#define anmol                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int32_t main()
{
    anmol
    int t;
    int n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        // int p=1;
        // for (int i = 0; i < n; i++)
        // {
        //     p*=2;
        // }
        
        int base=2, prod = 1;
        int p1 = n-1;
        int ans;
        while (p1)
        {
            if (p1 % 2 == 1)
            {
                prod = (prod * base) % 1000000007);
            }
            base = ((base % 1000000007) * (base % 1000000007)) % 1000000007;
            p1/=2;
        }
        printf("%d\n",prod);
    }
    
    return 0;
}