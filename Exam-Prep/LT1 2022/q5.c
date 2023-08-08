/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int digits(long num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}
long align(long num1, long num2) {
    int value = 0;
    int first = num2 / pow(10, digits(num2)-1);
    int second = num2 / pow(10, digits(num2) - 2);
    second = second % 10;
    printf("digits: %d\n", digits(num2));
    printf("first: %d\n", first);
    printf("second: %d\n", second);
    long copy = num1;
    bool first_is_present = false;
    bool second_is_present = false;
    while (copy != 0 || !first_is_present) {
        if (copy % 10 == first) {
            first_is_present = true;
        }
        copy = copy /10;
    }
    copy = num1;
    while (copy != 0 || !second_is_present) {
        if (copy % 10 == second) {
            second_is_present = true;
        }
        copy = copy /10;
    }
    if (!first_is_present) {
        return 0;
    }
    copy = num1;
    int second_index = 0;
    int first_index = 0;
    
    if (second_is_present) {
        while(copy %10 != second) {
        second_index++;
        copy = copy / 10;
        }
    }
    
    copy = num1;
    while(copy %10 != first) {
        first_index++;
        copy = copy / 10;
    }

    int difference = first_index - second_index;
     printf("%d\n", first_index);
     printf("%d\n", second_index);
     printf("%d", difference);
     if (difference < 0 || !second_is_present) {
        return first * pow(10, first_index);
     }

    return first * pow(10, first_index) + second* pow(10, second_index);
}

int main(void)
{
    long num1 = 512345;
    long num2 = 25191879;
    align(num1, num2);
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

    //     // Example 2
        // {
        //     long num1 = 934678;
        //     long num2 = 2934;
        //     printf("Test %d  :align(%ld, %ld)\n", tc_num++, num1, num2);
        //     printf("Expected:0\n");
        //     printf("Actual  :%ld\n", align(num1, num2));
        //     printf("\n");
        // }

    //     // Example 3
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
