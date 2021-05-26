#include<stdio.h>

int main()
{
   int n,r;

   printf("Enter the number : ");
   scanf("%d",&n);

   printf("Enter the number of rotations : ");
   scanf("%d",&r);

   int c=0,temp,temp1;
   temp=n;
   temp1=n;

   while (temp!=0)
   {
       temp=temp/10;
       c++;
   }
   
   int z;
   z=c-1;
   
   int k=1;
   int p=1;
   while(k<=z)
   {
       p=p*10;
       k++;
   } 

   int i=1;
   while (i<=r)
   {
       int rem,rest;
       rem=temp1%10;
       rest=temp1/10;
       temp1=rem*p+rest;
       i++;
   }
   
   printf("Rotated Number is : %d",temp1);

   return 0;
}