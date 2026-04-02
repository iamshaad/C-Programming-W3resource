#include<stdio.h>
int main()
//5. Compute rectangle perimeter and area
{
    int height=7,width=5,perimeter,area;
    perimeter=height*2+width*2;
    area=height*width;
    printf("Perimeter of the rectangle=%d inches\n",perimeter);
    printf("Area of the rectangle=%d square inches",area);
    return 0;
}
