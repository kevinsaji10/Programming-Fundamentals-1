/*
   Name :
   Email:
 */

#include <stdio.h>

int rearrange_digits(int num, int pivot) {
    int sign;
    if (num < 0) {
        num = -num;
        sign = -1;
    } else {
        sign = 1;
    }
    int main_num = num;
    int front = 0;
    int middle = 0;
    int back = 0;
    int digit;
    int multiplier1 = 1;
    while (num > 0) {
        digit = num % 10;
        if (digit < pivot) {
            back += digit * multiplier1;
            multiplier1 *= 10;
        }
        num = num / 10;
    }
    num = main_num;
    while (num > 0) {
        digit = num % 10;
        if (digit == pivot) {
            middle += digit * multiplier1;
            multiplier1 *= 10;
        }
        num = num / 10;
    }
    num = main_num;
    while (num > 0) {
        digit = num % 10;
        if (digit > pivot) {
            front += digit * multiplier1;
            multiplier1 *= 10;
        }
        num = num / 10;
    }
    return sign * (front + middle + back);
}

int main(void) {
    {
        printf("Test 1\n");
        int result = rearrange_digits(415, 3);
        printf("Expected:451\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int result = rearrange_digits(123454321, 3);
        printf("Expected:454331221\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = rearrange_digits(61728394, 5);
        printf("Expected:67891234\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        int result = rearrange_digits(61728394, 0);
        printf("Expected:61728394\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        int result = rearrange_digits(6900, 9);
        printf("Expected:9600\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 6\n");
        int result = rearrange_digits(-1245, 3);
        printf("Expected:-4512\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
