#include <stdio.h>

#define size 100
void Replace(int n, int m, int mat[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = mat[i][j];
            if (i % 2 != 0 && j % 2 != 0 && mat[i][j] % 2 == 0)
            {
                int sum = 0;
                while (temp)
                {
                    sum += (temp % 10);
                    temp /= 10;
                }
                mat[i][j] = sum;
            }
            else if (i % 2 == 0 && j % 2 == 0 && mat[i][j] % 2 != 0)
            {
                int rev = 0;
                while (temp)
                {
                    int rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp /= 10;
                }
                mat[i][j] = rev;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = mat[i][j], currProd = 1;
            while (temp)
            {
                currProd *= (temp % 10);
                temp /= 10;
            }
            mat[i][j] = currProd;
        }
    }
    printf("Replaced Elements (by their products of digits):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    Replace(n, m, mat);
    printf("Replaced Elements (using Replace Function):\n");
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