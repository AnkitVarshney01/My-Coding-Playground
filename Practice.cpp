#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j]!=0)
                {
                    int temp=arr[i]; 
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
    cout<<"Output is ahead!"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;

}