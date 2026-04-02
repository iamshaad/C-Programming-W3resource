#include <stdio.h>
int main()
//P14
{
    int distance;
    float spent_fuel, Average_consumption;
    printf("Total Distance Travelled (in Km): ");
    scanf("%d", &distance);
    printf("Total Fuel Spent (in Liters): ");
    scanf("%f", &spent_fuel);
    Average_consumption = distance / spent_fuel;
    printf("Average Comsumption (Km/Ltr)=%.4f\n", Average_consumption);

    return 0;
}
