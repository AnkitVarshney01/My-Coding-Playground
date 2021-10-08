#include <stdio.h>

void mergeArray(int arr[], int l, int m, int r, int n)
{
    int temp[n];
    int i=l, j=m+1, k = l;

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i];
            i++;
        }
        else if (arr[j] < arr[i])
        {
            temp[k++] = arr[j];
            j++;
        }
    }

    while (i <= m)
    {
        temp[k++] = arr[i++];
    }
    while (j <= r)
    {
        temp[k++] = arr[j++];
    }

    for (int t = l; t <= r; t++)
    {
        arr[t] = temp[t];
    }
}

void mergeSort(int arr[], int n)
{
    int size = 1;
    while (size < n)
    {
        for (int i = 0; i < n; i += 2 * size)
        {
            int l = i;
            int r = i + 2 * (size)-1;
            if (r >= n)
            {
                r = n - 1;
            }
            int m = (l + r) / 2;
            mergeArray(arr, l, m, r, n);
        }

        size *= 2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    mergeSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}