#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number upto which you want to find sum of Prime Numbers : ");
    scanf("%d",&n);

    printf("Prime Numbers are\n");
    for (int i = 2; i <= n; i++)
    {
        int count=0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        
        if (count>0)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }

    printf("Sum of all prime numbers between 1 and %d = %d",n,sum);
    
    return 0;
}
