#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number of lines: ");
    scanf("%d",&a);
    for(int i=1; i<=3*a; i=i+3)
    {
        for(int j=i; j<i+3; j++)
        {

            printf("%d  ",j);
        }
        printf("\n");
    }

}
