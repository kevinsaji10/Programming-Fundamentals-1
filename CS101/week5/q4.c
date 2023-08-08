#include <stdio.h>
int get_num_holes(int n) {
    int count = 0;
    while(n>0) {
        if (n%10 == 0 || n%10 == 4 || n%10 == 6 || n%10 == 9) {
            count++;
        } else if (n%10 == 8) {
            count = count + 2;
        }
        n = n/10;
    }
    return count;
}

int main(void) {
    {
        printf("Test 1\n");
        int result = get_num_holes(1208);
        printf("Expected:3\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 2\n");
        int result = get_num_holes(12357);
        printf("Expected:0\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 3\n");
        int result = get_num_holes(4690);
        printf("Expected:4\n");
        printf("Actual  :%d\n\n", result);
    }

    {
        printf("Test 4\n");
        int result = get_num_holes(888);
        printf("Expected:6\n");
        printf("Actual  :%d\n\n", result);
    }
}