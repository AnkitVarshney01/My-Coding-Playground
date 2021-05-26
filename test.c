#include<stdio.h>
int main()
{
    int freq[26]={0};
    char c;
    FILE *fileptr;
    fileptr=fopen("Test.txt","r");
    if (fileptr == NULL)
        printf("File is not available to open.");
    else
    {
        while ((c=fgetc(fileptr)) != EOF )
        {
            int i,j;
            i=c-65;
            j=c-97;
            if (j>=0 && j<=25)
                freq[j]++;
            else if (i>=0 && i<=25)
                freq[i]++;
        }
    }
    printf("Alphabet\t\tFrequency\n");
    printf("----------------------------------\n");
    for (int i = 0; i < 26; i++)
    {
        char ch=i+65;
        printf("    %c\t\t\t    %d \n",ch,freq[i]);
    }
    printf("----------------------------------\n");
    fclose(fileptr);
    return 0;
}