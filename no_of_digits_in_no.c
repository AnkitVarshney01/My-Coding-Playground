#include<stdio.h>
int main()
{
   int n,temp;

   printf("Enter the number : ");
   scanf("%d",&n);
   temp=n; 

   int c=0;
   while (temp!=0)
   {
       temp=temp/10;
       c++;
   }

   printf("Number of digits in number %d = %d digit/s",n,c);

   return 0;
}
