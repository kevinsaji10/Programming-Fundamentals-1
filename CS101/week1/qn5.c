#include <stdio.h>
#include <math.h>
int main(void) {
    double capacity;
    double voltage;
    double rated_power;
    printf("Enter capacity (mAh): ");
    scanf("%lf", &capacity);
    printf("Enter voltage (V): ");
    scanf("%lf", &voltage);
    rated_power = capacity/1000 * voltage;
    printf("Rated power: %.0lf\n", round(rated_power));



}