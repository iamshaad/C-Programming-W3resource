#include <stdio.h>
int main()
//16. Break amount into smallest banknotes
{
    int a, o, f, t, h, fif, twe, ten, five, two, one;
    printf("Enter Amount(in BDT): ");
    scanf("%d", &a);
    o = a / 1000;
    printf("%d Note(s) of 1000TK\n", o);
    f = (a - o * 1000) / 500;
    printf("%d Note(s) of 500TK\n", f);
    t = (a - (o * 1000 + f * 500)) / 200;
    printf("%d Note(s) of 200TK\n", t);
    h = (a - (o * 1000 + f * 500 + t * 200)) / 100;
    printf("%d Note(s) of 100TK\n", h);
    fif = (a - (o * 1000 + f * 500 + t * 200 + h * 100)) / 50;
    printf("%d Note(s) of 50TK\n", fif);
    twe = (a - (o * 1000 + f * 500 + t * 200 + h * 100 + fif * 50)) / 20;
    printf("%d Note(s) of 20TK\n", twe);
    ten = (a - (o * 1000 + f * 500 + t * 200 + h * 100 + fif * 50 + twe * 20)) / 10;
    printf("%d Note(s) of 10TK\n", ten);
    five = (a - (o * 1000 + f * 500 + t * 200 + h * 100 + fif * 50 + twe * 20 + ten * 10)) / 5;
    printf("%d Note(s) of 5TK\n", five);
    two = (a - (o * 1000 + f * 500 + t * 200 + h * 100 + fif * 50 + twe * 20 + ten * 10 + five * 5)) / 2;
    printf("%d Note(s) of 2TK\n", two);
    one = (a - (o * 1000 + f * 500 + t * 200 + h * 100 + fif * 50 + twe * 20 + ten * 10 + five * 5 + two * 2));
    printf("%d Note(s) of 1TK\n", one);

    return 0;
}
