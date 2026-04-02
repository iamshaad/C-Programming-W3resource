#include<stdio.h>
#include<math.h>
int main()
//P15
{
    int x1,y1,x2,y2;
    float a,b,c,dist;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter y1: ");
    scanf("%d",&y1);
     printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y2: ");
    scanf("%d",&y2);
    a=(x2-x1);
    b=(y2-y1);
    c=pow(a,2)+pow(b,2);
    dist=pow(c,0.5);
    printf("Distance between the points:%f",dist);
    return 0;
    }
