#include <stdio.h>
int main(void) {
    int n;
    int value;
    printf("Enter n: ");
    scanf("%f", &n);
    if (n == 0) {
        value = 1;
    } else {
        value = 1;
        for (int i = 1; i <= n; i++) {
            value *= (i);
        }
    }

    printf("%d! = %d", n, value);
}