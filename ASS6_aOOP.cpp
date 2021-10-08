#include <iostream>
using namespace std;

#define size 100
class num
{
    int arr[size];

public:
    void input(int n)
    {
        cout << "Enter contents of Array: \n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    int search(int n)
    {
        int x;
        cout << "Enter no. to search for in array: ";
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                return i;
        }
        return -1;
    }
};
int main()
{
    int n;
    num N;
    cout << "Enter size of array: ";
    cin >> n;
    N.input(n);
    int x = N.search(n);
    if (x == -1)
    {
        cout << "No. not found!!!\n";
    }
    else
    {
        cout << "No. is found at " << x + 1 << " position.\n";
    }
    return 0;
}