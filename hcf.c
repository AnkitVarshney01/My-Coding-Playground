#include<stdio.h>

int main()
{

   int a,b;
   printf("Enter the numbers: ");
   scanf("%d %d",&a,&b);
   
   int min;
   if (a>b)
       min=b;
    else
       min=a;

   int i=1;
   int hcf;
   while(i<=min)
   {
       if(a%i==0 && b%i==0)
       hcf=i;
       i++;
   }

   printf("HCF is %d",hcf);

   return 0 ;

}