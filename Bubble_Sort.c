#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];

    //array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    //bubble sort
    for (int count = 0; count <= n-2; count++)
    {
        for (int i = 0; i <= n-2-count; i++)
        {
            if (a[i]>a[i+1])
            {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
    }
    
    //printing sorted array
    for (int i = 0; i <= n-1; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
