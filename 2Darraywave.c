#include<stdio.h>

int main()
{
    int rows;
    int columns;
    // taking values of rows and columns from user
    scanf("%d %d", &rows, &columns);

    int a[rows][columns];
    // taking input for matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < columns; i++)
    {
        if(i%2!=0)
            for (int j = rows-1; j >= 0; j--)
                printf("%d",a[j][i]);
        else
            for(int k=0; k<rows ; k++)
                printf("%d",a[k][i]);
    }

    return 0;
}