#include<stdio.h>
#include<math.h>

char* primefind(long long int *a)
{
    char* str="Prime";
    char*str1="Not Prime";
    for (long long int i = 2; i*i < *a; i++)
    {
        if (*a%i==0)
        {
            return str1;
        }
        
    }
    
    return str;
}
int main()
{
    long long int *x;
    long long int a;
    scanf("%lld",&a);
    x=&a;
    printf("%s",primefind(x));
    return 0;
}