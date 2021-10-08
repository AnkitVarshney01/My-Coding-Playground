#include <stdio.h>
#define size 100

void aSort(int n, int m, int mat[][m])
{
    for (int j = 0; j < m; j++)
    {
        for (int count = 0; count <= n - 2; count++)
        {
            for (int k = 0; k <= n - 2 - count; k++)
            {
                if (mat[k][j] < mat[k + 1][j])
                {
                    mat[k][j] = mat[k][j] + mat[k + 1][j];
                    mat[k + 1][j] = mat[k][j] - mat[k + 1][j];
                    mat[k][j] = mat[k][j] - mat[k + 1][j];
                }
            }
        }
    }
}

void perfect(int n, int m, int mat[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k * k <= mat[i][j]; k++)
            {
                if (k * k == mat[i][j])
                    mat[i][j] = k;
            }
        }
    }
}

int main()
{
    int n, m;
    printf("Enter no. of rows and columns of matrix: ");
    scanf("%d %d", &n, &m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    printf("Entered Elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    aSort(n, m, mat);
    printf("Column wise descending sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    perfect(n, m, mat);
    printf("The final matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}