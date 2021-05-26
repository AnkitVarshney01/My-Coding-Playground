#include<stdio.h>

int main()
{
    int rows;
    int columns;
    // taking values of rows and columns from user
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];
    // taking input for matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}