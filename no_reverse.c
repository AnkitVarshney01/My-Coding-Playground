#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp;
    temp=n;
    while (temp!=0)
    {
    rev=rev*10+temp%10;
    temp=temp/10;
    }
    printf("%d",rev);
    int count=0;
    while (rev!=0)
    {
        count++;
        rev/=10;
    }
    if (count==4)
        printf("\nValid");
    else 
    printf("\nNot Valid");


    return 0;
}