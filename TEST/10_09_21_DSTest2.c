#include <stdio.h>

// Answer Function
void printReverse(int *a, int startindex, int endindex)
{
    if (startindex > endindex)
    {
        return;
    }
    printReverse(a + 1, startindex + 1, endindex);
    printf("%d ", *a);
}

int main()
{
    int n = 10;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", (arr + i));
    printReverse(arr, 0, n - 1); // recursive Function call in main()
    return 0;
}