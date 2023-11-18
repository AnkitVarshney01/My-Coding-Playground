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
#include <list>

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

ln countB = 0, countW = 0;

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
}

class Graph
{
public:
    map<int, list<int>> adj;
    void addEdge(int v, int w);
    void DFS(int v, string s);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v, string s)
{
    // cout << v << " -> " << s[v - 1] << "\n";
    if (s[v - 1] == 'W')
        countW++;
    else
        countB++;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        DFS(*i, s);
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        Graph g;
        vector<vln> p(n + 1, vln(2));
        for (ln i = 2; i <= n; i++)
        {
            p[i][0] = i;
            cin >> p[i][1];
        }
        for (ln i = 2; i < n + 1; i++)
        {
            g.addEdge(p[i][1], p[i][0]);
        }

        string s;
        cin >> s;

        ln count = 0;
        for (ln i = 1; i < n + 1; i++)
        {
            countB = 0, countW = 0;
            g.DFS(i, s);
            if (countB == countW)
                count++;
            // cout << endl;
        }

        cout << count;
        cout << endl;
    }

    return 0;
}