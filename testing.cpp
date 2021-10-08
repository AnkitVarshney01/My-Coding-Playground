#include <iostream>
#include <cstring>
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
int32_t main()
{
    fastio();
    string s, s1;
    getline(cin, s);
    scanf("\n");
    int k;
    cin >> k;
    int countSpaces = 0;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] == ' ')
        {
            continue;
        }
        else if (s[i] == ' ')
        {
            countSpaces++;
        }
        if (countSpaces == k)
        {
            break;
        }
        cout << s[i];
    }
    return 0;
}