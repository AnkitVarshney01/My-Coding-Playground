#include<stdio.h>

void pi(int a)
{
    if(a==0)
        return;
    pi(a-1);
    printf("%d\n",a);
}
int main()
{
    int x;
    scanf("%d", &x);
    pi(x);
    return 0;
}