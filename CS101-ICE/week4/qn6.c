#include <math.h>
#include <stdio.h>
int main(void) {
    // function to find the total number of digits in an integer (qn4)
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    int digits = 0;
    int num1 = num;
    while (num > 0) {
        digits++;
        num = num / 10;
    }

    // function to compare the first and last digits of the integer.
    int original_digits = digits;
    // value variable to be used as the divisor to isolate the first digit of the integer
    // in the while loopf
    int value = 1;

    // rounds variable to keep track of the iterations in the while loop
    int rounds = 0;

    // for loop to find the divisor value to divide the input integer and find the quotient, which
    // will be the first number in the integer.(power function returns a double and nut an integer.)
    for (int i = 0; i < digits - 1; i++) {
        value *= 10;
    }

    while (digits > 1) {
        // case if the first and last numbers in the integer do not match
        if ((num1 / value != num1 % 10)) {
            printf("Number is not a palindrome.\n");
            break;
        } else {
            // make a calculation such that a new integer is created without the first and last
            // digits of the original integer. assign this new integer back to num1.
            num1 = (num1 - ((num1 / value) * value)) / 10;
            // since 2 digits from the integer are removed, subtract 2 from digits
            digits = digits - 2;
            // since 2 digits are removed divide value by 10 power 2 which is 100.
            value = value / 100;
            rounds++;
        }
        // repeat the else part until digit = 1 (if the original number is odd), or digit = 0 (if the original
        // number is even). If all the numbers match, the while loop is exited.
    }
    // print number is a palindrome. this is done because the original integer can be even or odd
    if (rounds * 2 == original_digits || rounds * 2 + 1 == original_digits) {
        printf("Number is a palindrome.\n");
    }
}
