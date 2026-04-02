#include <stdio.h>
int main()
//P19
{
    int p,q,r,s;
    printf("Enter first number: ");
    scanf("%d", &p);
    printf("Enter second number: ");
    scanf("%d", &q);
    printf("Enter third number: ");
    scanf("%d", &r);
    printf("Enter fourth number: ");
    scanf("%d", &s);
    if(p%2==0 && q>0 && r>0 && s>0 && q>r && s>p && r+s>p+q)
    printf("Correct Values");
    else
       printf("Wrong Values");
    return 0;
}
