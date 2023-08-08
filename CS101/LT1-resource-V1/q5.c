/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */

#include <stdio.h>

long align(long num1, long num2) {
    return -1;
}


int main(void) {
    int tc_num = 1;

    // Example 1
    {
        long num1 = 512345;
        long num2 = 25191879;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:2005\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }

    // Example 2
    {
        long num1 = 934678;
        long num2 = 2934;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:0\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }

    // Example 3
    {
        long num1 = 934678;
        long num2 = 769438;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:70\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }

    // Example 4
    {
        long num1 = 934078;
        long num2 = 940923;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:904000\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }

    // Example 5
    {
        long num1 = 123456;
        long num2 = 24;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:20400\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }

    // Example 6 (not in question paper)
    {
        long num1 = 98;
        long num2 = 940923;
        printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        printf("Expected:90\n");
        printf("Actual  :%ld\n", align(num1, num2));
        printf("\n");
    }
}
