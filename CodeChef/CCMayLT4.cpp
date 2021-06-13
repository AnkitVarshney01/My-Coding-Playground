#include <iostream>
#include <string>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int q[k];
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
        }
        int dist = 0;
        for (int j = 0; j < s.size() - 1; j++)
        {
            if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == '1' && s[j + 1] == '0'))
                dist += 1;
            else
                dist += 2;
        }

        for (int i = 0; i < k; i++)
        {
            int prevDist = 0;
            if ((s[q[i] - 1] == '0' && s[q[i]] == '0') || (s[q[i] - 1] == '1' && s[q[i]] == '1'))
                prevDist += 2;

            if ((s[q[i] - 2] == '0' && s[q[i] - 1] == '0') || (s[q[i] - 2] == '1' && s[q[i] - 1] == '1'))
                prevDist += 2;

            if ((s[q[i] - 1] == '0' && s[q[i]] == '1') || (s[q[i] - 1] == '1' && s[q[i]] == '0'))
                prevDist += 1;

            if ((s[q[i] - 2] == '0' && s[q[i] - 1] == '1') || (s[q[i] - 2] == '1' && s[q[i] - 1] == '0'))
                prevDist += 1;

            if (s[q[i] - 1] == '0')
                s[q[i] - 1] = '1';
            else
                s[q[i] - 1] = '0';

            int afterDist = 0;
            if ((s[q[i] - 1] == '0' && s[q[i]] == '0') || (s[q[i] - 1] == '1' && s[q[i]] == '1'))
                afterDist += 2;

            if ((s[q[i] - 2] == '0' && s[q[i] - 1] == '0') || (s[q[i] - 2] == '1' && s[q[i] - 1] == '1'))
                afterDist += 2;

            if ((s[q[i] - 1] == '0' && s[q[i]] == '1') || (s[q[i] - 1] == '1' && s[q[i]] == '0'))
                afterDist += 1;

            if ((s[q[i] - 2] == '0' && s[q[i] - 1] == '1') || (s[q[i] - 2] == '1' && s[q[i] - 1] == '0'))
                afterDist += 1;

            if (afterDist > prevDist || afterDist < prevDist)
                dist += afterDist - prevDist;
            else if (afterDist == prevDist)
                dist += 0;

            cout << dist << endl;
        }
    }

    return 0;
}