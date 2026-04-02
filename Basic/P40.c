#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number of the range: ");
    scanf("%d",&a);
    printf("Enter Second Number of the range: ");
    scanf("%d",&b);
    for(int i=a; i<=b; i++)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
    }

}
