#include<iostream>
using namespace std;

int checkprime(int n)
{
    int flag=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int hcf(int n1, int n2)
{
    int fac;
    int n = n1 < n2 ? n1 : n2;
    for (int i = 2; i <= n; i++)
    {
        if(n1%i==0 && n2%i==0)
            fac=i;
    }
    
    return fac;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int ep;
        cin>>ep;
        int wp=100-ep;
        if(ep==100 || ep==0)
            cout<<1<<endl;
        else
        {
            float e=0,w=0;

            if ((checkprime(ep) == 0 || checkprime(wp) == 0) && ep!=2 && ep!=98) 
            {
                e=ep;
                w=wp;
            }
            else
            {
                int factor=hcf(ep,wp) ;
                e=ep/factor;
                w=wp/factor;
            }
            // cout<<"E= "<<e<<endl<<"W= "<<w<<endl;
            cout << (e + w) <<endl;
        }
    }
    
    return 0;
}