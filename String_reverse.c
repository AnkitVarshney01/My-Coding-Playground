#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    printf("Enter the string: ");
    scanf("%s",arr);
    for (int i = 0; i < strlen(arr)/2; i++)
    {
        char temp;
        temp=arr[i];
        // printf("%c\n",temp);
        arr[i]=arr[strlen(arr)-1-i];
        arr[strlen(arr)-1-i]=temp;
    }
    // strrev(arr);
    printf("%s" , arr);
    return 0;
}