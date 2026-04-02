#include<stdio.h>
int main()
//P11
{
    float wi1,wi2,ni1,ni2;
    float Average_weight;
    printf("Weight of Item1: ");
    scanf("%f",&wi1);
    printf("No. of Item1: ");
    scanf("%f",&ni1);
    printf("Weight of Item2: ");
    scanf("%f",&wi2);
    printf("No. of Item2: ");
    scanf("%f",&ni2);
    Average_weight=((wi1*ni1)+(wi2*ni2))/(ni1+ni2);
    printf("Average Weight=%f\n",Average_weight);


return 0;
    }
