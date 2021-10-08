// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <climits>
// #include <vector>
// #include <stdlib.h>
// #include <map>
// #include <queue>
// #include <stack>
// #include <set>
// #include <functional>
// #include <random>
// #include <numeric>
// #include <iomanip>
// #include <chrono>
// #include <cmath>
// #include <cassert>
// #include <array>

// #define int long long
// using namespace std;
// void fastio()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// int32_t main()
// {
//     fastio();
//     cout << "Please enter the no. of words to input:";
//     int n, maxLength = 0;
//     cin >> n;
//     char names[n][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             names[i][j] = ' ';
//         }
//     }

//     cout << endl
//          << "Please enter " << n << " words:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> names[i];
//         if (maxLength < strlen(names[i]))
//         {
//             maxLength = strlen(names[i]);
//         }
//     }
//     cout << endl
//          << endl;

//     //left aligned
//     cout << "Left Aligned Output:" << endl
//          << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << names[i] << endl;
//     }
//     cout << "---------------------" << endl
//          << endl;

//     //top aligned
//     char temp[maxLength + 2][n];
//     for (int i = 0; i < maxLength + 2; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp[i][j] = names[j][i];
//         }
//     }

//     cout << "Top Aligned Output:" << endl
//          << endl;
//     for (int i = 0; i < maxLength + 2; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (temp[i][j] == '\0')
//                 cout << "  ";
//             else
//                 cout << temp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "---------------------" << endl
//          << endl;

//     // //right aligned
//     for (int i = 0; i < n; i++)
//     {
//         int x = maxLength + 1 - strlen(names[i]);
//         int y = strlen(names[i]);
//         names[i][maxLength + 1] = '\0';
//         for (int j = y - 1; j >= 0; j--)
//         {
//             names[i][j + x] = names[i][j];
//             names[i][j] = ' ';
//         }
//         if (names[i][y] == '\0')
//             names[i][y] = ' ';
//     }

//     cout << "Right Aligned Output:" << endl
//          << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << names[i] << endl;
//     }
//     cout << "---------------------" << endl
//          << endl;
//     // //bottom aligned
//     for (int i = 0; i < maxLength + 2; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp[i][j] = names[j][i];
//         }
//     }

//     cout << "Bottom Aligned Output:" << endl
//          << endl;
//     for (int i = 0; i < maxLength + 1; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << temp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "---------------------" << endl;
//     return 0;
// }
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Please enter the no. of words to input:";
    int n, maxLength = 0;
    cin >> n;
    char names[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            names[i][j] = ' ';
        }
    }

    cout << endl
         << "Please enter " << n << " words:";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
        if (maxLength < strlen(names[i]))
        {
            maxLength = strlen(names[i]);
        }
    }
    cout << endl
         << endl;

    //left aligned
    cout << "Left Aligned Output:" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }
    cout << "---------------------" << endl
         << endl;

    //top aligned
    char temp[maxLength + 2][n];
    for (int i = 0; i < maxLength + 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = names[j][i];
        }
    }

    cout << "Top Aligned Output:" << endl
         << endl;
    for (int i = 0; i < maxLength + 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (temp[i][j] == '\0')
                cout << "  ";
            else
                cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl
         << endl;

    // //right aligned
    for (int i = 0; i < n; i++)
    {
        int x = maxLength + 1 - strlen(names[i]);
        int y = strlen(names[i]);
        names[i][maxLength + 1] = '\0';
        for (int j = y - 1; j >= 0; j--)
        {
            names[i][j + x] = names[i][j];
            names[i][j] = ' ';
        }
        if (names[i][y] == '\0')
            names[i][y] = ' ';
    }

    cout << "Right Aligned Output:" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }
    cout << "---------------------" << endl
         << endl;

    //bottom aligned
    for (int i = 0; i < maxLength + 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = names[j][i];
        }
    }

    cout << "Bottom Aligned Output:" << endl
         << endl;
    for (int i = 0; i < maxLength + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
    return 0;
}
