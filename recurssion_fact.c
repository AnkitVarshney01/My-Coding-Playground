#include<stdio.h>

// bp -> n!
int fact(int a)
{
    // base case
    if(a==0)
        return 1;

    // sp -> (n-1) !
    int fnm1=fact(a-1);

    // work
    int fa=a*fnm1;

    return fa;
}
int main()
{
    int n;
    printf("Enter no : ");
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial of %d : %d",n, result);
    return 0;
}