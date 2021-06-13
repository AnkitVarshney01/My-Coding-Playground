#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    string s;
    int no;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> no;
        m.insert({s, no});
    }
    map<string, int>::iterator itr;
    int i;
    string nameSearch;

    while (getline(cin, nameSearch))
    {
        cin >> nameSearch;
        itr = m.find(nameSearch);
        if (itr == m.end())
        {
            cout << "Not found" << endl;
        }
        else
        {
            cout << itr->first << "=" << itr->second << endl;
        }
    }

    return 0;
}