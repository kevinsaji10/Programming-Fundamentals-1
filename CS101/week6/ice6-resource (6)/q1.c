#include <stdio.h>
int calculate_ticket_price(int age) {
    if (age>= 13 && age<= 59) {
        return 76;
    } else if (age>= 4 && age<= 12) {
        return 56;
    } else if (age>= 60) {
        return 38;
    } else {
        return 0;
    }

}

int main(void) {
    printf("Test 1\n");
    printf("Expected:76\n");
    printf("Actual  :%d\n", calculate_ticket_price(13));
    printf("\n");

    printf("Test 2\n");
    printf("Expected:56\n");
    printf("Actual  :%d\n", calculate_ticket_price(12));
    printf("\n");

    printf("Test 3\n");
    printf("Expected:38\n");
    printf("Actual  :%d\n", calculate_ticket_price(99));
    printf("\n");

    printf("Test 3\n");
    printf("Expected:0\n");
    printf("Actual  :%d\n", calculate_ticket_price(3));
    printf("\n");
}
