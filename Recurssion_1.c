#include<stdio.h>

// bp = n -> 1
void pd(int a)
{
    // base case
    if(a==0)
        return;

    // sp = n-1 -> 1
    printf("%d\n",a);
    
    // self work
    pd(a-1);
}
int main()
{
    int x;
    scanf("%d", &x);
    pd(x);
    return 0;
}