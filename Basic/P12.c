#include<stdio.h>
int main()
//P12
{
    int id,wh,aph,salary;
    printf("Enter Employees Id (Max. 10 chars): ");
    scanf("%d",&id);
    printf("Enter the working hours (in a month): ");
    scanf("%d",&wh);
    printf("Salary amount/hr: ");
    scanf("%d",&aph);
    salary=wh*aph;
    printf("Employees Id=%d\n",id);
    printf("Salary=%d",salary);

return 0;
    }
