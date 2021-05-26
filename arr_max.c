#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max;
    max=a[0];
    for (int k = 1; k < n; k++)
    {
        if (a[k]>max)
            max=a[k];
    }
    
    printf("Max is %d",max);
    return 0;
}
// #include<limits.h>
// int max= INT_MIN;