#include<stdio.h>
int main()
{
    char numberstr[10];
    printf("Enter number: ");
    scanf("%s",numberstr);
    char c;
    int res=0;
    for(int i=0; numberstr[i]!='\0'; i++)
    {
        int x;
        c=numberstr[i];
        x=c-48;
        res=res*10+x;
    }
    printf("Number after converting it from string to integer: %d",res);
    return 0;
}