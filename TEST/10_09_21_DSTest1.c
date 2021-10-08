#include <stdio.h>

void mergeSortedArray(int a[], int b[], int n, int m)
{
    int c[n + m];
    int i = n - 1, j = m - 1, k = 0;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            c[k++] = a[i];
            i--;
        }
        else if (b[j] > a[i])
        {
            c[k++] = b[j];
            j--;
        }
    }
    while (i >= 0)
    {
        c[k++] = a[i--];
    }
    while (j >= 0)
    {
        c[k++] = b[j--];
    }
    for (int l = 0; l < k; l++)
    {
        printf("%d ", c[l]);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    mergeSortedArray(a, b, n, m);
}