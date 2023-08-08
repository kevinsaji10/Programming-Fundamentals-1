/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */

#include <stdio.h>

int get_num_steps(int n, int look_for) {
    if (look_for == n) {
        return 0;
    }
    if (n<0) {
        n = -n;
    }
    int num_of_steps = 0;
    while(n> 1) {
        num_of_steps++;
        if (n %2 !=0) {
            n = (3 *n) +1;
        } else {
            n = n / 2;
        }
        if (n == look_for) {
            return num_of_steps;
        }
    }
    return -1;
}

int main(void) {
    int tc_num = 1;

    // Example 1
    {
        int n = 10;
        int look_for = 16;
        printf("Test %d: get_num_steps(%d, %d)\n", tc_num++, n, look_for);
        printf("Expected:2\n");
        printf("Actual  :%d\n\n", get_num_steps(n, look_for));
    }

    // Example 2
    {
        int n = 3;
        int look_for = 1;
        printf("Test %d: get_num_steps(%d, %d)\n", tc_num++, n, look_for);
        printf("Expected:7\n");
        printf("Actual  :%d\n\n", get_num_steps(n, look_for));
    }

    // Example 3
    {
        int n = 8;
        int look_for = 3;
        printf("Test %d: get_num_steps(%d, %d)\n", tc_num++, n, look_for);
        printf("Expected:-1\n");
        printf("Actual  :%d\n\n", get_num_steps(n, look_for));
    }

    // Example 4
    {
        int n = 123;
        int look_for = 123;
        printf("Test %d: get_num_steps(%d, %d)\n", tc_num++, n, look_for);
        printf("Expected:0\n");
        printf("Actual  :%d\n\n", get_num_steps(n, look_for));
    }
}