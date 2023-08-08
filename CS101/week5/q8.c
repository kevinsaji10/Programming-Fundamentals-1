#include <stdbool.h>
#include <stdio.h>
int swap_digit_pairs(int n) {
    // original n, negative or positive
    int original_n = n;
    // convert negative n to a positive number to use in code
    if (n < 0) {
        n = -n;
    }
    // make a copy of |n|
    int n_copy = n;
    int count = 0;
    // find length of integer to create array
    while (n > 0) {
        count++;
        n = n / 10;
    }
    // array containing the digits in reverse order
    int arr[count];
    for (int i = 0; i < count; i++) {
        arr[i] = n_copy % 10;
        n_copy = n_copy / 10;
    }
    // array containing the digits in reverse order but the pairs are swapped
    int temp = 0;
    for (int i = 1; i <= count - 1; i += 2) {
        temp = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = temp;
    }
    // int multiplier is to multiply each number by the requires power of 10 to convert
    // the array to an integer
    // int new will hold the output integer
    // this block of code iterates through the array and adds the digits multiplied by
    // their respective powers of 10
    int multiplier = 1;
    int new = 0;
    for (int i = 0; i <= count - 1; i++) {
        new += arr[i] * multiplier;
        multiplier *= 10;
    }
    // if the integer is negative originally, convert back to negative
    if (original_n < 0) {
        new = -new;
    }
    return new;
}

// easier method: just find the remainder when the original integer is divided by 100.
// then swap the digits

int main(void) {
    {
        printf("Test 1\n");
        int result = swap_digit_pairs(1);
        printf("Expected:1\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 2\n");
        int result = swap_digit_pairs(32);
        printf("Expected:23\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int result = swap_digit_pairs(90);
        printf("Expected:9\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int result = swap_digit_pairs(971);
        printf("Expected:917\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 5\n");
        int result = swap_digit_pairs(382818);
        printf("Expected:838281\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 6\n");
        int result = swap_digit_pairs(-13);
        printf("Expected:-31\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 7\n");
        int result = swap_digit_pairs(-1347);
        printf("Expected:-3174\n");
        printf("Actual  :%d\n\n", result);
    }
}