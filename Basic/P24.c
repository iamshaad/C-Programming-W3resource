#include<stdio.h>
int main()
//24. Check if two integers are multiples
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
      if(a%b==0 || b%a==0)
        printf("Multiplied!");
    else
        printf("Not Multiplied!");

    return 0;
}
