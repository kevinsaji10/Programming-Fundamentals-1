#include <stdio.h>

int main(void) {
    for (int i = 0; i< 3; i++){
        printf("A\n");
        for (int j = 0; j< 3; j++) {
            printf("B\n");
            if (i== 1 || j == 1) {
                continue;
            }
            printf("i: %d, j: %d\n", i, j);
        }
        printf("C\n");
    }
}