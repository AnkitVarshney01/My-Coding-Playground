#include<stdio.h>
int main()
{
    char arr[20];
    printf("Enter the string: ");
    scanf("%[^\n]*%c",arr);
    int count=0;
    int i=0;
    while (arr[i]!='\0')
    {
        if(arr[i]!=' ')
            
            count++;
        i++;
    }
    printf("Length of string: %d",count);

    return 0;
}