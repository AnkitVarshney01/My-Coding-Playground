// #include <iostream>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int D, d, p, q;
//         cin >> D >> d >> p >> q;

//         int notesCount = 0;
//         int n_1Days = D / d;
//         notesCount = (n_1Days * (2 * p + (n_1Days - 1) * q) * d) / 2;
//         int lastAdd = p + n_1Days * q;
//         int remDays = D % d;
//         notesCount += remDays * lastAdd;
//         cout << notesCount << endl;
//     }

//     return 0;
// }
#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, D, p, q, sum, n;
        cin >> D >> d >> p >> q;
        n = D / d;
        sum = ((D/d) * (2 * p + (n - 1) * q)*d) / 2;
        int remDays = D % d;
        int remSum = remDays * (p + n * q);
        sum += remSum;
        cout << sum << endl;
    }
    return 0;
}