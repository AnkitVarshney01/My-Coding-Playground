#include<stdio.h>

void pdi(int n)
{
    if(n==0)
        return;
    
    printf("%d\n",n);
    pdi(n-1);
    printf("%d\n",n);
}
int main()
{
    int x;
    scanf("%d", &x);
    pdi(x);
    return 0;
}