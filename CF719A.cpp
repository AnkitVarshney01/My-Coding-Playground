#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        int a[26]={0},flag=1;
        int c;
        for (int j = 0; j < n; j++)
        {
            c=s[j]-65;
            if(a[c]==0)
            {
                while(j+1<n && s[j]==s[j+1])
                    j++;
                a[c]++;
            }
            else
            {
                flag=0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}