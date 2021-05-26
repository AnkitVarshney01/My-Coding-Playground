#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;

        int maxdist=d*D;

        if(maxdist>=10 && maxdist<21)    
            cout<<A;
        else if(maxdist>=21 && maxdist<42)
            cout<<B;
        else if(maxdist>=42)
            cout<<C;
        else
            cout<<0;
    }
    return 0;
}