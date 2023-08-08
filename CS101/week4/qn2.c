#include <stdio.h>

int main(void) {
    int num;
    int large;
    int small;
    printf("Enter number: ");
    scanf("%d", &num);
    large = small = num;
    while (num > 0) {
        if (num < small) {
            small = num;
        } else if (num > large) {
            large = num;
        }
        printf("Largest so far == %d. Smallest so far == %d.\n", large, small);
        printf("Enter number: ");
        scanf("%d", &num);
    }
    printf("Bye!\n");
}