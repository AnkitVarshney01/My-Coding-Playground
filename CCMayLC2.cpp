#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N, x, k;
        char ans[4] = "NO";
        scanf("%d %d %d", &N, &x, &k);
        /* below code gave tle */
        // for (int i = 0; (0 + (i*k)) < N+2; i++)
        // {
        //     if ((0 + (i * k)) == x)
        //     {
        //         strcpy(ans,"YES");
        //         break;
        //     }
        //     else
        //         strcpy(ans,"NO");
        // }
        // for (int i = N+1; ((N + 1) - (i * k)) > 0; i++)
        // {
        //     if (((N + 1) - (i * k)) == x)
        //     {
        //         strcpy(ans, "YES");
        //         break;
        //     }
        //     else
        //         strcpy(ans, "NO");
        // }

        if ((x % k == 0 || ((N + 1 - x) % k) == 0) && x <= N + 1)
        {
            strcpy(ans, "YES");
        }

        printf("%s\n", ans);
    }

    return 0;
}