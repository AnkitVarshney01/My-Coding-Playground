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
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int persons;
        cin >> persons;
        vector<vector<int>> periods(persons, vector<int>(2));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < persons; j++)
            {
                cin >> periods[j][i];
            }
        }

        sort(periods.begin(), periods.end(), sortcol);
        for (int i = 0; i < persons; i++)
        {
            cout << periods[i][0] << " " << periods[i][1]<<endl;
        }

        // int countPersons=0;
        // for (int i = 0; i < persons; i++)
        // {
            
        // }
        
        cout << endl;
    }

    return 0;
}