#include<stdio.h>
int main()
{
//38. Divide two numbers or print if division isn't possible
    float x,y;
    float d;
    printf("Enter First number: ");
    scanf("%f",&x);
    printf("Enter Second number: ");
    scanf("%f",&y);
    d=x/y;
    if(y!=0){
        printf("%.2f",d);
    }

    else if(y==0){
        printf("Division is not possible");
    }

}
