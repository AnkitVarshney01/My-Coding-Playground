#include <stdio.h>
#define SIZE 1000
int a[SIZE], n = 0;

void heapify(int a[], int n, int i)
{
    if (i >= n)
        return;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int index = i;
    if (left < n && a[left] > a[index])
        index = left;
    if (right < n && a[right] > a[index])
        index = right;
    if (i == index)
        return;
    if (i != index)
    {
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
        i = index;
    }
    heapify(a, n, i);
}

void makeHeap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
}

void HeapSort(int a[], int n)
{
    makeHeap(a, n);
    int size = n;
    for (int i = 1; i <= n - 1; i++)
    {
        int temp = a[0];
        a[0] = a[size - 1];
        a[size - 1] = temp;
        size--;
        heapify(a, size, 0);
    }
}

int main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter elements of Array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    HeapSort(a, n);

    printf("After sorting, the array in ascending order is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}