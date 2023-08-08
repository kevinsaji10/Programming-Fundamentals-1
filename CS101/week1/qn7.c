#include <stdio.h>

int main(void) {
    double height;
    double weight;
    printf("Enter weight(kg): ");
    scanf("%lf", &weight);
    printf("Enter height(m): ");
    scanf("%lf", &height);
    double BMI = weight/(height*height);
    printf("BMI is: %lf\n" , BMI);

}