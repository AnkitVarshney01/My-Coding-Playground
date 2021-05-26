#include<iostream>
using namespace std;
int main()
{
    int n,t,temp;
    cin>>t;
    int j=0;
    while(j<t)
    {
        cin>>n;
        int arr[100];
        for (int i = 0; i < n; i++)
            cin>>arr[i];

        cout<<"Original array is: \n";
        for (int i = 0; i < n; i++)
            cout<<arr[i]<<endl;

        for (int i = 0; i <= (n/2)-1; i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-i-1]=temp;
        }
        cout<<"Reverse array is: "<<endl;
        for (int i = 0; i < n; i++)
            cout<<arr[i]<<endl;   
        j++;
    }
    return 0;
}