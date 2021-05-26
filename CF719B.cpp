#include<iostream>
using namespace std;

int main()
{
    int t;
    int n;
    
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int con = 0;
        for(int k = 1; k <= n; k++)
        {
            int temp=k,ndg=0,sim=0;
            while (temp!=0)
            {
                temp /= 10;
                ndg++;
            }
            
            temp=k;
            int rem=temp%10;
            temp /= 10;
            while (temp!=0)
            {
                int rem1=temp%10;
                if (rem1==rem)
                    sim++;
                else
                    break;
                temp /= 10;
            }
            
            if ((sim+1)==ndg)
            {
                con++;
            }
            
        }
        cout<<con<<endl;
    }
    
    return 0;
}