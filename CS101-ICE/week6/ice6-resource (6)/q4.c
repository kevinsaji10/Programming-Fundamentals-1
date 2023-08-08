
// #include <stdio.h>
// #include <math.h>
// void print_expanded_form(int num) {
//     int digit;
//     int multiplier = 1;
//     if (num%10 != 0) {
//             digit = num%10 * multiplier;
//             printf("%d", digit);
//     }
//     num = num /10;
//     multiplier *= 10;
//     while(num>0) {
//         if (num%10 != 0) {
//             digit = num%10 * multiplier;
//             printf(" + %d", digit);
//         }
//         num = num /10;
//         multiplier *= 10;
//     }

// }



#include <stdio.h>
#include <math.h>
void print_expanded_form(int num) {
    int digit;
    int multiplier = 1;
    if (num%10 != 0) {
            digit = num%10 * multiplier;
            printf("%d", digit);
    }
    num = num /10;
    multiplier *= 10;
    while(num>0) {
        if (num%10 != 0) {
            digit = num%10 * multiplier;
            printf(" + %d", digit);
        }
        num = num /10;
        multiplier *= 10;
    }

}

int main(void) {
    printf("Test 1\n");
    printf("Expected:");
    printf("10 + 2\n");
    printf("Actual  :");
    print_expanded_form(12);
    printf("\n");

    printf("Test 2\n");
    printf("Expected:");
    printf("100 + 20 + 3\n");
    printf("Actual  :");
    print_expanded_form(123);
    printf("\n");

    printf("Test 3\n");
    printf("Expected:");
    printf("100000 + 4\n");
    printf("Actual  :");
    print_expanded_form(100004);
    printf("\n");

    printf("Test 4\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(0);
    printf("\n");

    printf("Test 5\n");
    printf("Expected:");
    printf("Invalid Input!\n");
    printf("Actual  :");
    print_expanded_form(-163);
    printf("\n");

}