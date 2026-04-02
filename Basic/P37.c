#include<stdio.h>
int main()
//P37
{
    int x,y;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    if (x>0 && y>0)
    printf("Quadrant 1(+,+)");
      else  if (x<0 && y>0)
    printf("Quadrant 2(-,+)");
       else if (x<0 && y<0)
    printf("Quadrant 3(-,-)");
        else
    printf("Quadrant 4(+,-)");
    return 0;
    }
