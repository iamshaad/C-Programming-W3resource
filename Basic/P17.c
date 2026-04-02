#include<stdio.h>
int main()
//P17
{
    int sec,min,hour;
    printf("Input Seconds: ");
    scanf("%d",&sec);
    hour=sec/3600;
    min=(sec-hour*3600)/60;
    sec=sec-(hour*3600+min*60);
    printf("%d Hours %d Mintues %d Seconds",hour,min,sec);

return 0;
    }
