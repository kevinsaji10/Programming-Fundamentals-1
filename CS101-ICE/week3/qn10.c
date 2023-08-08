#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int prev = 0;
    int value = 1;
    int next;
    if (n >= 0) {
        printf("%d ", prev);
    }
    if (n >= 1) {
        printf("%d", value);
    }

    if (n > 1) {
        for (int i = 0; i < n - 2; i++) {
            next = prev + value;
            printf(" %d", next);
            prev = value;
            value = next;
        }
    }
}