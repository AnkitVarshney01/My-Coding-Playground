#include <stdio.h>
#define size 100

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
        arr[t] = tempArr[t];
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

int binSearch(int arr[], int i, int x)
{
    int low = 0, high = i, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] == x)
            return mid;
    }
    return -1;
}

void insert(int arr[], int *i)
{
    int x;
    int ci;
    printf("Please enter no. ");
    scanf("%d", &x);
    arr[*i] = x;
    *i = *i + 1;
    mergeSort(arr, 0, *i - 1, *i);
}

void del(int arr[], int *i)
{
    int x;
    printf("Select no you want to delete: ");
    scanf("%d", &x);
    int idx = binSearch(arr, *i, x);
    if (idx == -1)
        printf("%d cannot be deleted, it is not present in array\n\n", x);
    else
    {
        if (*i == 1)
        {
            *i = *i - 1;
        }
        else
        {
            for (int j = idx; j < *i - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            *i = *i - 1;
        }
    }
}

void search(int arr[], int length)
{
    int n1;
    printf("Enter no you want to search: ");
    scanf("%d", &n1);
    int idx = -1, low = 0, high = length, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] < n1)
            low = mid + 1;
        else if (arr[mid] > n1)
            high = mid - 1;
        else if (arr[mid] == n1)
        {
            low = high + 1;
            idx = mid;
        }
    }

    if (idx != -1)
        printf("%d is present at index no %d\n\n", arr[idx], idx);
    else
        printf("%d is not present\n\n", n1);
}

void display(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int main()
{
    int a[size];
    int n, i = 0;
    do
    {
        int x;
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nEnter choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert(a, &i);
            break;
        case 2:
            del(a, &i);
            break;
        case 3:
            search(a, i);
            break;
        case 4:
            display(a, i);
            break;
        case 5:
            printf("Exiting...");
            break;
        default:
            printf("Error!!!\n");
            break;
        }
    } while (n != 5);

    return 0;
}
