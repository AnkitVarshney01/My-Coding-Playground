#include <stdio.h>

struct sparse
{
    int row;
    int col;
    int value;
};

typedef struct sparse sparseMat;

void readMat(sparseMat a[])
{
    int m, n, t;
    printf("Enter matrix dimension m x n: ");
    scanf("%d %d", &m, &n);
    printf("Enter no of non zero element: ");
    scanf("%d", &t);
    a[0].row = m;
    a[0].col = n;
    a[0].value = t;
    printf("Enter matrix elements as RowNo., ColNo., Value: \n");
    for (int i = 1; i <= t; i++)
        scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].value);
}

void printMat(sparseMat c[])
{
    int k = 1;
    for (int i = 0; i < c[0].row; i++)
    {
        for (int j = 0; j < c[0].col; j++)
        {
            if (k <= c[0].value)
            {
                if (i == c[k].row && j == c[k].col)
                {
                    printf("%8d", c[k].value);
                    k++;
                }
                else
                    printf("%8d", 0);
            }
            else
                printf("%8d", 0);
        }
        printf("\n");
    }
}

int isUpperTriangular(struct sparse s[])
{
    for (int i = 1; i <= s[0].value; i++)
        if (s[i].row > s[i].col)
            return 0;
            
    return 1;
}

int main()
{
    sparseMat a[20];
    readMat(a);
    printMat(a);
    int ans = isUpperTriangular(a);
    printf("%d", ans);
    return 0;
}