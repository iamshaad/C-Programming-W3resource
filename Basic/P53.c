#include<stdio.h>
int main(){
int p,r,t,si;
printf("Input principle:");
scanf("%d",&p);
printf("Input Rate of interest:");
scanf("%d",&r);
printf("Input Total Time:");
scanf("%d",&t);
si=(p*r*t)/100;
printf("Simple interest =%d",si);
}
