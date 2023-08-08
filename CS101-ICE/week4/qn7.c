#include <stdio.h>

int main(void) {
    int start;
    int end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        int counter = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                counter++;
            }
        }
        if (counter == 2) {
            printf("%d ", i);
        }
    }
}
