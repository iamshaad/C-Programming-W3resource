#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter First Number of the range: ");
    scanf("%d",&a);
    printf("Enter Second Number of the range: ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++)
    {
        if(i%17!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum=%d",sum);
}
