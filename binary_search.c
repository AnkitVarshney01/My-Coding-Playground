#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter sorted array : ");

    for (int i = 0; i < n ; i++)
        scanf("%d",&arr[i]);
    
    int n1;
    printf("enter the no you want to search for ");
    scanf("\n%d",&n1);
    
    int idx=-1,low=0,high=n,mid;
    while (low!=high)
    {
        mid=(low+high)/2;
        if (arr[mid]<n1)
            low=mid+1;
        else if (arr[mid]>n1)
            high=mid-1;
        else
        {
            low=mid;
            high=mid;
            idx=mid;
        }
    }
    
    if(idx!=-1)
    printf("%d is present at index no %d",arr[idx],idx);
    else
    printf("%d is not present",n1);
    return 0;
}