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

void addMat(sparseMat a[], sparseMat b[], sparseMat c[])
{
    int i = 1, j = 1, k = 1;
    while (i <= a[0].value && j <= b[0].value)
    {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
        {
            c[k].row = a[i].row;
            c[k].col = a[i].col;
            c[k].value = a[i].value;
            i++;
            k++;
        }
        else if (a[i].row == b[j].row && a[i].col == b[j].col)
        {
            c[k].row = a[i].row;
            c[k].col = a[i].col;
            c[k].value = a[i].value + b[j].value;
            i++;
            j++;
            k++;
        }
        else
        {
            c[k].row = b[j].row;
            c[k].col = b[j].col;
            c[k].value = b[j].value;
            j++;
            k++;
        }
    }
    while (i <= a[0].value)
    {
        c[k].row = a[i].row;
        c[k].col = a[i].col;
        c[k].value = a[i].value;
        i++;
        k++;
    }
    while (j <= b[0].value)
    {
        c[k].row = b[j].row;
        c[k].col = b[j].col;
        c[k].value = b[j].value;
        j++;
        k++;
    }
    c[0].row = a[0].row;
    c[0].col = a[0].col;
    c[0].value = k - 1;
}

int main()
{
    sparseMat a[20], b[20], c[100];
    printf("For matrix A:\n");
    readMat(a);
    printf("For matrix B:\n");
    readMat(b);
    printf("Matrix A:\n");
    printMat(a);
    printf("Matrix B:\n");
    printMat(b);
    addMat(a, b, c);
    printf("Matrix after adding matrix A and B:\n");
    printMat(c);
    return 0;
}