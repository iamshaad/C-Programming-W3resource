#include<stdio.h>
int main()
{   int a;
    printf("Enter Number of lines: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        {
            printf("%d %d %d",i,i*i,i*i*i);
            printf("\n");
        }

    }
