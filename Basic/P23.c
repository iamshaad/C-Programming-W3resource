#include <stdio.h>
int main()
//P23
{
    float a, b, c, d, e,perimeter;
    printf("Enter traingle side1: ");
    scanf("%f", &a);
    printf("Enter traingle side2: ");
    scanf("%f", &b);
    printf("Enter traingle base: ");
    scanf("%f", &c);
    perimeter=a+b+c;
    if(a+b>c && b+c>a && c+a>b){
    printf("Possible to form a traingle\n");
    printf("Perimeter=%f",perimeter);}
    else
    printf("Impossible to form a traingle");
}
