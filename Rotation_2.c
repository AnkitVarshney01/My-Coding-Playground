#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int r;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Enter the number of rotations : ");
    scanf("%d",&r);

    int temp=n;
    int count=0;

    while (temp!=0)
    {
        temp=temp/10;
        count++;
    }

    printf("Number of digits = %d",count);

   int k=1;
   int p=1;
   while(k<=r)
   {
       p=p*10;
       k++;
   } 

   int rem,quo;
   rem=n%p;
   quo=n/p;

   int p1,j;
   p1=j=1;
   while (j<=count)
   {
       p1=p1*10;
       j++;
   }

   n=rem*p1/p + quo;

   printf("\nRotated number is : %d",n);

   return 0;
}