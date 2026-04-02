#include<stdio.h>
int main()
{
    int i,number,sum;
    float average;
    sum=0;
    number=0;
    printf("Enter Mathematics marks (0 to terminate):\n");
    while(1)
    {
        scanf("%d",&i);
        if(i<=0){
            break;}
        number=number+1;
        sum=sum+i;
    }
    average=sum/number;
    printf("Average=%d",average);
}
