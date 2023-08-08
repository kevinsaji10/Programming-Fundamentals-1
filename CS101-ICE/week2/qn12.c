#include <stdio.h>
int main(void) {
    float amount;
    int dollars = 0;
    int cents50 = 0;
    int cents20 = 0;
    int cents10 = 0;
    int cents5 = 0;

    printf("Enter amount: ");
    scanf("%f", &amount);
    amount = amount * 10;
    while (amount >= 10) {
        amount = amount - 10;
        dollars++;
    }
    while (amount > 0) {
        if (amount >= 5) {
            amount = amount - 5;
            cents50++;
        } else if (amount < 5 && amount >= 2) {
            amount = amount - 2;
            cents20++;
        } else if (amount < 2 && amount >= 1) {
            amount = amount - 1;
            cents10++;
        } else {
            amount = amount - 0.5;
            cents5++;
        }
    }
    if (dollars != 0) {
        printf("Number of 1 dollars: %d\n", dollars);
    }
    if (cents50 != 0) {
        printf("Number of 50 cents: %d\n", cents50);
    }
    if (cents20 != 0) {
        printf("Number of 20 cents: %d\n", cents20);
    }
    if (cents10 != 0) {
        printf("Number of 10 cents: %d\n", cents10);
    }
    if (cents5 != 0) {
        printf("Number of 5 cents: %d\n", cents5);
    }
}