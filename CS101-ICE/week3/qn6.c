#include <math.h>
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");
    //a
    for (int i = 0; i < n; i++) {
        printf("--\\|/-");
    }
    printf("\n");
    printf("\n");
    // b
    for (int i = n; i > 0; i--) {
        printf("%d ", i * i);
    }
    printf("\n");
    printf("\n");
    // c
    for (int i = 1; i < n + 1; i++) {
        printf("%d%d%d ", i, i + 1, i + 2);
    }
    printf("\n");
    printf("\n");
    // d
    for (int i = 0; i < n; i++) {
        printf("%c%c", i + 'A', i + 'a');
    }
    printf("\n");
    printf("\n");
    // e
    int num = 0;
    for (int i = n; i > 0; i--) {
        num += i;
        printf("%d ", i);
    }
    printf("(sum: %d)\n", num);
    printf("\n");
    // f
    int value = 0;
    for (int i = 1; i <= n; i++) {
        value += i * pow(10, i - 1);
        printf("%d\n", value);
    }
    printf("\n");
}