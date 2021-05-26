#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements in array : ");
    scanf("%d", &n);
    int *arr;
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    for (int j = 1; j < n - 1; j++)
    {
        int item;
        item = *(arr + j);
        int k = j - 1;
        while (*(arr + k) > item && k >= 0)
        {
            if (*(arr + k) > item)
            {
                *(arr + k + 1) = *(arr + k);
                k--;
            }
        }
        *(arr + k + 1) = item;
    }

    return 0;
}