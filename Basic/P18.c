#include<stdio.h>
int main()
//P18
{
    int year,month,day;
    printf("Input no. of days: ");
    scanf("%d",&day);
    year=day/365;
    month=(day-year*365)/30;
    day=day-(year*365+month*30);
    printf(" %d Year(s)\n %d Month(s)\n %d day(s)",year,month,day);

return 0;
    }
