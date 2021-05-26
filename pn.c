#include<stdio.h>
int main()
{
   int x;
   int count=0;
  
   printf("Enter the number:");
   scanf("%d",&x);

   for (int i = 1; i <= x; i++)
   {
       if(x%i==0)
       count++;
   }
    
    if(count>2)
    printf("Number is not prime!");
    else
    printf("Number is prime!");    
    
   return 0;
}