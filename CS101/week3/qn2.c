
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n-1; i++) {
        printf("%d, ", i);
    }
    printf("%d\n", n);
}