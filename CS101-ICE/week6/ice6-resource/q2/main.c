#include <stdbool.h>
#include <stdio.h>
long stutter(int num) {
    int sign = 1;
    if (num == 0) {
        return num;
    }
    if (num < 0) {
        num = -num;
        sign = -1;
    }
    int multiplier = 1;
    int value = 0;
    while (num > 0) {
        int digit = num %10;
        value += ((digit) * multiplier * 10) + (digit * multiplier);
        multiplier *= 100;
        num = num / 10;
    }
    return value * sign;
}
int main(void) {
    int tc_num = 1;
    {
        printf("Test %d\n", tc_num++);
        printf("Expected:112233\n");
        printf("Actual  :%ld\n", stutter(123));
        printf("\n");
    }
    {
        printf("Test %d\n", tc_num);
        printf("Expected:11\n");
        printf("Actual  :%ld\n", stutter(1));
        printf("\n");
    }
    {
        printf("Test %d\n", tc_num);
        printf("Expected:0\n");
        printf("Actual  :%ld\n", stutter(0));
        printf("\n");
    }
    {
        printf("Test %d\n", tc_num);
        printf("Expected:-11\n");
        printf("Actual  :%ld\n", stutter(-1));
        printf("\n");
    }
    {
        printf("Test %d\n", tc_num);
        printf("Expected:-113322\n");
        printf("Actual  :%ld\n", stutter(-132));
        printf("\n");
    }
}