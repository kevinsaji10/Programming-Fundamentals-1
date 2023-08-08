#include <stdio.h>

int main(void) {
    double weight;
    double height;
    printf("Enter weight: ");
    scanf("%lf", &weight);
    printf("Enter height: ");
    scanf("%lf", &height);
    double BMI = weight / (height * height);
    printf("BMI is %lf\n", BMI);
    if (BMI < 18.5) {
        printf("You are considered underweight.\n");
    } else if (BMI >= 18.5 && BMI < 25) {
        printf("You are considered normal.\n");
    } else if (BMI >= 25 && BMI < 30) {
        printf("You are considered overwieght.\n");
    } else {
        printf("You are considered obese.\n");
    }
}