#include <stdio.h>
#include <stdlib.h>
int gcd (int num1, int num2) {
    num1 = abs(num1);
    num2 = abs(num2);
    if (num1 == num2) {
        return num1;
    }
    int smaller;
    int larger;
    if (num1 > num2) {
        smaller = num2;
        larger = num1;
    } else {
        smaller = num1;
        larger = num2;
    }
    int gcd = 1;
    for (int i =1; i<smaller+1; i++) {
        if (smaller % i ==0 && larger % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:3\n");
        int result = gcd(9, 12);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:1\n");
        int result = gcd(1, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:1\n");
        int result = gcd(3, 5);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:3\n");
        int result = gcd(-3, -6);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:0\n");
        int result = gcd(0, 0);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

}
