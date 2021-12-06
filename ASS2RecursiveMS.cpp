#include <stdio.h>

void mergeSortedArray(int arr[], int l, int m, int r, int n)
{
    int i = l, j = m + 1, k = l;
    int tempArr[n];

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            tempArr[k++] = arr[i];
            i++;
        }
        else if (arr[j] < arr[i])
        {
            tempArr[k++] = arr[j];
            j++;
        }
    }

    while (i <= m)
    {
        tempArr[k++] = arr[i++];
    }
    while (j <= r)
    {
        tempArr[k++] = arr[j++];
    }

    for (int t = l; t <= r; t++)
    {
        arr[t]=tempArr[t];
    }
}

void mergeSort(int arr[], int l, int r, int n)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m, n);
        mergeSort(arr, m + 1, r, n);
        mergeSortedArray(arr, l, m, r, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1, n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}