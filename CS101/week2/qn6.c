#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);
    if (a < b + c && b < a + c && c < a + b) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is not a valid triangle.\n");
    }
}