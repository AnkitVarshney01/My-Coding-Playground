#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
        else if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }
    
    printf("%s",s);
    return 0;
}