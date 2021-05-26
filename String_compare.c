#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter b string: ");
    scanf("%s",b);
    int la=strlen(a),lb=strlen(b),count=0;
    if (la==lb)
    {
        for (int i = 0; i < la; i++)
            if (a[i]==b[i])
                count++;
        if (count==la)
            printf("Equal");
        else
            printf("Not Equal");
    }
    else
        printf("Not Equal");
    
    return 0;
}