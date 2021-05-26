#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    
    printf("Enter the no of rows : ");
    scanf("%d",&n);

    int nst   = (n-1)/2;
    int nsp   = 1;

    for(int i = 1; i<=n; i++){
        if(i <= nst){
        for(int x=1; x<=nst; x++){
            printf("*");
        }
        for(int y=1; y<=nsp; y++){
            printf(" ");
        }
        for(int x=1; x<=nst; x++){
            printf("*");
        }

    
    printf("\n");
    nst--;
    nsp=nsp+2;
    } else if(i>=nst){

        for(int x=1; x<=nst; x++){
            printf("*");
        }
        for(int y=1; y<=nsp; y++){
            printf(" ");
        }
        for(int x=1; x<=nst; x++){
            printf("*");
        }

    
    printf("\n");
    nst++;
    nsp=nsp-2;
    }
}
}