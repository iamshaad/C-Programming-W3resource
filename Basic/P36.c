#include<stdio.h>
int main()
//P36
{
    int pass;
    for(int i=1;i<=3 ;i++){
    printf("Enter Password(Max 4digits): ");
    scanf("%d",& pass);
    if(pass!=1234)
    printf("Incorrect Password\n");
    else{
    printf("Correct Password");
    break;}
    return 0;
    }

}
