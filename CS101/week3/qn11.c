#include <stdio.h>

int main(void) {
    int rows;
    int cols;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <=cols; j++) {
            if (j == 1 || i == 1||i == rows|| j == cols) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}