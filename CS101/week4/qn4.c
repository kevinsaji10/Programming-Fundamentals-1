#include <stdio.h>

int main(void) {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    int digits = 0;
    while (num > 0) {
        digits++;
        num = num / 10;
    }
    printf("%d\n", digits);
}