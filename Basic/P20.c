#include<stdio.h>
#include<math.h>
int main()
{
//20. Solve quadratic equation using Bhaskara's formula
    float a,b,c,t,h,d,e;

    printf("Input the first number(a): ");
    scanf("%f",&a);
    printf("Input the second number(b): ");
    scanf("%f",&b);
    printf("Input the third number(c): ");
    scanf("%f",&c);
    t=pow(b,2);
    h=pow(t-4*a*c,0.5);
    d=(-b+h)/(2*a);
    e=(-b-h)/(2*a);
    if(a!=0 && h>=0){
    printf("Root1 =%f\n",d);
    printf("Root2 =%f\n",e);}
    else
        printf("No Real Roots");
}
