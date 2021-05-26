#include<stdio.h>

void pid(int start,int n)
{
    if(start==n+1)
        return;
    
    printf("%d\n",start);
    pid(start+1,n);
    printf("%d\n",start);
}
int main()
{
    int x;
    scanf("%d", &x);
    pid(1,x);
    return 0;
}