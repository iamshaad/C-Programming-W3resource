#include<stdio.h>
int main()
//P8
{
    int year,week,day;
    printf("Input no. of days: ");
    scanf("%d",&day);
    year=day/365;
    week=(day-year*365)/7;
    day=day-(year*365+week*7);
    printf(" %d Year(s)\n %d Week(s)\n %d Day(s)",year,week,day);

return 0;
    }
