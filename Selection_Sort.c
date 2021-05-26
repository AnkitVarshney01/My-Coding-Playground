#include<stdio.h>
#include<limits.h>
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

    //selection sort
    for (int count = 0; count <= n-2; count++)
    {
        int minidx=count;
        for (int i = count+1; i <= n-1; i++)
        {
            if (a[minidx]>a[i])
            {
                minidx=i;
            }
        }
        int temp;
        temp=a[minidx];
        a[minidx]=a[count];
        a[count]=temp;
    }
    
    //printing sorted array
    for (int i = 0; i <= n-1; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
