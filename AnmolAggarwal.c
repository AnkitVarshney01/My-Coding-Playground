#include <stdio.h>
#include <math.h>
#define pi 3.14159265
int factorial(int b){
    double prod=1;
    for(int i=1;i<=b;i++){
        prod*=i;
    }
    return prod;
}
double power(double a,int b){
    double prod=1;
    for(int i=b;i>0;i--){
        prod*=a;
    }
    return prod;
}
int main() {
    int yes=0;
    double x,positive=0,negative=0;
    printf("Enter the angle(in degrees): ");
    scanf("%lf",&x);
    double t=(x*pi)/180;
    printf("%lf\n",x);

    //to make angle less than 2pi...
    while(x>360){
       x=(int)x%360;
    }
    if(x>180){
        yes=1;
        x=360-x;
    }
    else if(x<=180){
        x=180-x;
    }
    x=(x*pi)/180;
    double p=1,n=1;
    for(int i=1;p>0.0000001;i=i+4){
        p= power(x,i)/factorial(i);
        positive+=p;
    }
    for(int i=3;n>0.0000001;i=i+4){
        n= power(x,i)/factorial(i);
        negative+=n;
    }
    
    double answer=positive-negative;
    if(yes==1){
        answer=(-1)*answer;
    }
    printf("Calculated value: %1.6lf\n",answer);
    printf("Actual value: %lf\n",sin(t));
    printf("Absolute error: %lf",answer-sin(t));
    return 0;
}