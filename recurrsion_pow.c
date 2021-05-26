#include<stdio.h>

int power(int n, int exp)
{
    int ans;
    if(exp==0)
        return 1;
    int ansnm1=power(n,exp-1);
    ans=n*ansnm1;
    return ans;
}

int main()
{
    int n, exp;
    scanf("%d %d", &n,&exp);
    int result=power(n,exp);
    printf("%d",result);
    return 0;
}