#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currentSum = 0;
    int maxSum = INT_MIN;
    vector<int> sumStore;
    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (a[i] < 0)
        {   
            currentSum- = a[i];
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
    return 0;
}