#include <stdio.h>
void transpose_matrix(int rows, int cols, int src[][cols], int dest[][rows]) {
    for (int i = 0; i< cols; i++) {
        for (int j = 0; j< rows; j++) {
            dest[i][j] = src[j][i];
        }
    }
}
void print_array(int cols, int rows, int dest[][rows]) {
    for (int i = 0; i<cols; i++) {
        for (int j = 0; j< rows; j++) {
            printf("%d ", dest[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    {
        int rows = 3;
        int cols = 3;
        int src[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int dest[cols][rows];
        printf("Test 1\n");
        printf("Expected:\n");
        printf("1 4 7\n");
        printf("2 5 8\n");
        printf("3 6 9\n");
        transpose_matrix(rows, cols, src, dest);
        printf("Actual:\n");
        print_array(cols, rows, dest);
        printf("\n");
    }

    {
        int rows = 3;
        int cols = 2;
        int src[][2] = {{1, 2}, {3, 4}, {5, 6}};
        int dest[cols][rows];
        printf("Test 2\n");
        printf("Expected:\n");
        printf("1 3 5\n");
        printf("2 4 6\n");
        transpose_matrix(rows, cols, src, dest);
        printf("Actual:\n");
        print_array(cols, rows, dest);
        printf("\n");
    }

    {
        int rows = 1;
        int cols = 1;
        int src[][1] = {{1}};
        int dest[cols][rows];
        printf("Test 3\n");
        printf("Expected:\n");
        printf("1\n");
        transpose_matrix(rows, cols, src, dest);
        printf("Actual:\n");
        print_array(cols, rows, dest);
        printf("\n");
    }
}