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

    int main()
    {
        fastio();
        int t = 0;
        cin >> t;
        while (t--)
        {
            string s;
            cin >> s;

            string t = "Yes";

            ln i = 0;
            bool f = 1;

            ln k;
            if (s[0] == 'Y')
                k = 0;
            else if (s[0] == 'e')
                k = 1;
            else if (s[0] == 's')
                k = 2;
            else
                f = 0;

            if (f)
                for (; i < s.length(); i++)
                {
                    if (s[i] != t[k % 3])
                    {
                        f = 0;
                        break;
                    }
                    k++;
                }

            if (f)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }

        return 0;
    }