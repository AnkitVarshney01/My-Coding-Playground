#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter your array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum:%d", sum);
}
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
    
//     printf("Enter the no. : ");
//     scanf("%d",&n);

//     int arr[n];
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     for (int i = 0; i <= n-1; i++)
//     {
//         sum+=arr[i];
//     }
//     printf("Sum is %d",sum);

//     return 0;
// }