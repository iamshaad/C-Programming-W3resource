#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Number of lines: ");
    scanf("%d",&a);
    printf("Number of characters in a line: ");
    scanf("%d",&b);
    for(int i=1; i<=a*b; i=i+6)
    {
        for(int j=i; j<i+b; j++)
        {
            printf("%d ",j);

        }
        printf("\n");
    }

}
