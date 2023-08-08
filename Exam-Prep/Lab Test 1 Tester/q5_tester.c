// Author: Jason Chan
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// insert your function below


int main(void) {
    int score = 0;
    {
        long num1 = 1234567;
        long num2 = 26;
        long ans = 200060;
        if (align(num1, num2) == ans) {
            score += 1;
        }
    }
    
    {
        long num1 = 129010;
        long num2 = 91;
        long ans = 9010;
        if (align(num1, num2) == ans) {
            score += 1;
        }
    }

    {
        long num1 = 1234567;
        long num2 = 7654327888;
        long ans = 7;
        if (align(num1, num2) == ans) {
            score += 1;
        }
    }
    {
        long num1 = 2147483648;
        long num2 = 288;
        int ans = 2000080008;
        if (align(num1, num2) == ans) {
            score += 1;
        }
    }
    printf("Total score    :%d/4\n", score);

}
