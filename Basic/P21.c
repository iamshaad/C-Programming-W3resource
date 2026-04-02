#include<stdio.h>
int main(){
    //P21
    int a;
    printf("Input an Integer: ");
    scanf("%d",&a);
    if(a>=0 && a<=20)
    printf("Range [0,20]");
      else  if(a>=21 && a<=40)
    printf("Range [21,40]");
      else  if(a>=41 && a<=60)
    printf("Range [41,60]");
       else if(a>=61 && a<=80)
    printf("Range [61,80]");
    else
        {
    printf("Worng Input");}
    return 0;
    }
