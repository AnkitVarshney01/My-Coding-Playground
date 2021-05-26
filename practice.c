#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter String: ");
    scanf("%s",str);
    int arr[26]={0};
    char c;
    for (int k = 0; k < strlen(str); k++)
    {
        c=str[k];
        int j;
        j = c - 97;
        if (j >= 0 && j <= 25)
            if(arr[j]==0)
            {
                arr[j]++;
                printf("%c",c);
            }
    }

    return 0;
}