#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *arrange(int start, int step, int n) {
    int *arrange = calloc(n, sizeof(int));
    arrange[0] = start;

    for (int i = 1; i< n; i++) {
        arrange[i] = start + step *i;
    }
    return arrange;
}

int main(void) {
    int tc_num = 1;
    {

        int n = 1;
        int *result = arrange(1, 1, n);
        printf("Test case %d\n", tc_num++);
        printf("Expected:1\n");
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n\n");
        free(result);
    }

    {
        int n = 10;
        int *result = arrange(0, 2, n);
        printf("Test case %d\n", tc_num++);
        printf("Expected:0 2 4 6 8 10 12 14 16 18\n");
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n\n");
        free(result);
    }

    {
        int n = 9;
        int *result = arrange(0, -2, n);
        printf("Test case %d\n", tc_num++);
        printf("Expected:0 -2 -4 -6 -8 -10 -12 -14 -16\n");
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
}
