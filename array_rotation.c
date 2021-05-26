#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    int r;
    printf("Enter no of rotations : ");
    scanf("%d",&r);
    int* arr;
    for (int i = 0; i < n; i++)
        scanf("%d",arr+i);
    
    int z=r%n;
    for (int i = 0; i < z; i++)
    {
        int item;
        item=*(arr+n-1);
        int j=n-2;
        while (j>=0)
        {
            *(arr+j+1)= *(arr+j);
            j--;
        }
        *(arr+0)=item;
    }

    for (int i = 0; i < n; i++)
        printf("%d ",*(arr+i));
        
    return 0;
}