#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n ; i++)
        scanf("%d",&arr[i]);
    int n1;
    printf("enter the no you want to search for ");
    scanf("\n%d",&n1);
    int idx;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]==n1)
        {
            idx=j;
            break;
        }
    }
    if(idx<=n )
    printf("%d is present at index no %d",arr[idx],idx);
    else
    printf("%d is not present",n1);
    return 0;
}