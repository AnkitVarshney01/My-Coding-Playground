#include <stdio.h>
int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {4, 2, 3, 1}, {1, 4, 2, 3}};
    printf("%d\n", *(*(a+**a+1)+3));
    
    return 0;
}