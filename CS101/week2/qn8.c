#include <stdio.h>

int main(void) {
    int month;
    printf("Enter month as number: ");
    scanf("%d", &month);
    if (month > 12 || month < 1) {
        printf("Enter a number between 1 and 12 only.\n");
    } else {
        if (month == 2) {
            printf("There are 28 days in this month.\n");
            // first condition is for 1 3 5 7 second condition is for 8 10 12. if both are true then there are 31 days.
        } else if ((month % 2 != 0 && month < 9) || (month > 7 && month % 2 == 0)) {
            printf("There are 31 days in this month.\n");
        } else {
            printf("There are 30 days in this month.\n");
        }
    }
}