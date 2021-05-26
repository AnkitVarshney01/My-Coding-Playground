#include <stdio.h>
#include <string.h>
char* reversestring(char s[],int i)
{
    char srev;
    
    if (i >= (strlen(s) / 2))
        return s;

    int x=strlen(s)-i-1;
    srev=s[i];
    s[i]=s[x];
    s[x]=srev;

    reversestring(s, i+1);

    return s;
}

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int i=0;

    char srev[100];
    strcpy(s,reversestring(s,i));

    printf("%s", s);
    return 0;
}