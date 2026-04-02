#include<stdio.h>
int main()
//13. Find the maximum of three integers
{
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);
      if(a==b && a>c)
        printf("Maximum value of three integers:%d",a);

    else if (a>b && a>c)
    {
        printf("Maximum value of three integers:%d",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum value of three integers:%d",b);
    }
else
    printf("Maximum value of three integers:%d",c);

    return 0;
}
