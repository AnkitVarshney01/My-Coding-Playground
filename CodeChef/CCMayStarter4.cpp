#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, f;
        // int m = 2;
        cin >> n >> k >> f;
        vector<vector<int>> invPeriods(n, vector<int>(2));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> invPeriods[i][j];
            }
        }

        sort(invPeriods.begin(), invPeriods.end(), sortcol);
        int cheatTime = 0;
        cheatTime += invPeriods[0][0];
        int maxEndTime = invPeriods[0][1];
        for (int i = 0; i < n; i++)
        {
            if (maxEndTime < invPeriods[i][1] && maxEndTime >= invPeriods[i][0])
            {
                maxEndTime = invPeriods[i][1];
            }
            else if (maxEndTime < invPeriods[i][0])
            {
                cheatTime += invPeriods[i][0] - maxEndTime;
                maxEndTime = invPeriods[i][1];
            }
            else if (maxEndTime > invPeriods[i][1])
            {
                continue;
            }
        }
        // cout << maxEndTime << endl;
        cheatTime += f - maxEndTime;
        if (cheatTime >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool compare(vector<int> a, vector<int> b)
// {
//     cout << "Comparing " << a[0] << " " << b[0] << endl;
//     return a[0] < b[0];
// }

// int main()
// {
//     vector<vector<int>> a(5);
//     for (int i = 3; i <= 10; i++)
//         a[2].push_back(i);
//     for (int i = 1; i <= 5; i++)
//         a[0].push_back(i);
//     for (int i = 2; i <= 6; i++)
//         a[1].push_back(i);
//     for (int i = 5; i <= 8; i++)
//         a[3].push_back(i);
//     for (int i = 4; i <= 11; i++)
//         a[4].push_back(i);

//     cout << "arrays before sortng:\n";
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < a[i].size(); j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
//     cout << "\n";

//     sort(a.begin(), a.end(), compare);
//     cout << "arrays after sorting:\n";
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < a[i].size(); j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }