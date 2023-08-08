#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 7 == 0) {
            sum += i;
        }
    }
    printf("%ld\n", sum);
}