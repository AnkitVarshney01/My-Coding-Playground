#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter b string: ");
    scanf("%s",b);
    int i=0;
    while (a[i]==b[i])
    {
        if (a[i]=='\0' && b[i]=='\0')
            break;
        i++;
    }
    if(a[i]=='\0' && b[i]=='\0')
        printf("Equal");
    else
        printf("Not Equal");
    return 0;
}