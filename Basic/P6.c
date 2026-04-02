#include<stdio.h>
int main()
//6. Compute circle perimeter and area
{
    float r,perimeter,area;
    printf("Enter radius of the circle: ");
    scanf("%f",&r);

    perimeter=2*3.14*r;
    area=3.14*r*r;
    printf("Perimeter of the Circle=%.3f inches\n",perimeter);
    printf("Area of the Circle=%.3f square inches",area);
    return 0;
}
