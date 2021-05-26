#include<stdio.h>
int main()
{
    int x, sum=0;
    
    printf("Enter the number!");
    scanf("%d",&x);
    
    int count=1;
    while (count<=x)
    {   
        if (count%2==1)
        sum += count;            
        count++;
    }
    
    printf("Sum of first %d odd natural numbers is %d", x/2+1, sum);
    
    return 0;
}