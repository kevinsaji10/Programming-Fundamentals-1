#include <stdio.h>
long add_or_multiply(int arr[], int n, char op) {
    int value = 0;
    if (op == '*') {
        value = 1;
    }
    for (int i = 0; i< n; i++) {
        if (op == '+') {
            value+= arr[i];
        }
        else {
            value *= arr[i];
        }
    }
    return value;
}
int main(void) {
    {
        printf("Test 1\n");
        int values[] = {2, 4, 5, 7, 9, 0, 11};
        printf("Expected:38\n");
        printf("Actual  :%lu\n", add_or_multiply(values, sizeof(values)/sizeof(int), '+'));
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {2, 4, 5, 7, 9, 0, 11};
        printf("Expected:0\n");
        printf("Actual  :%lu\n", add_or_multiply(values, sizeof(values)/sizeof(int), '*'));
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {2, 4, 5, 7, 9, 11};
        printf("Expected:27720\n");
        printf("Actual  :%lu\n", add_or_multiply(values, sizeof(values)/sizeof(int), '*'));
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {2};
        printf("Expected:2\n");
        printf("Actual  :%lu\n", add_or_multiply(values, sizeof(values)/sizeof(int), '*'));
        printf("\n");
    }


}