#include <stdio.h>
int main(void) {
    double income;
    double tax;
    printf("Enter personal income: ");
    scanf("%lf", &income);
    if (income >= 200000) {
        tax = (income - 200000) / 100 * 20 + 21150;
    } else if (income < 200000 && income >= 160000) {
        tax = (income - 160000) / 100 * 18 + 13950;
    } else if (income < 160000 && income >= 120000) {
        tax = (income - 120000) / 100 * 15 + 7950;
    } else if (income < 120000 && income >= 80000) {
        tax = (income - 80000) / 100 * 11.5 + 3350;
    } else if (income < 80000 && income >= 40000) {
        tax = (income - 40000) / 100 * 7 + 550;
    } else if (income < 40000 && income >= 30000) {
        tax = (income - 30000) / 100 * 3.50 + 200;
    } else if (income < 30000 && income >= 20000) {
        tax = (income - 20000) / 100 * 2 + 0;
    } else {
        tax = 0;
    }
    printf("Tax payable: $%.1lf\n", tax);
}