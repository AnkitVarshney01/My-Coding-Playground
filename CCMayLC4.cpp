#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char ttt[3][3];
        int cx=0, co=0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>ttt[i][j];
                if(ttt[i][j]=='X')
                    cx++;
                else if(ttt[i][j]=='O')
                    co++;
            }
        }
        // cout<<cx<<" "<<co<<endl;
        if(co==cx || cx==(co+1))
        {
            // cout<<"Correct TTT"<<endl;
                                                                    
        }
        else
            cout<<3<<endl;











    }
    return 0;
}
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout << ttt[i][j];
//     }
//     cout<<endl;
// }