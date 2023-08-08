#include <stdio.h>
int main(void) {
    int n1;
    int n2;
    int small;
    int large;
    printf("Enter n1>");
    scanf("%d", &n1);
    printf("Enter n2>");
    scanf("%d", &n2);
    while (!((n1 + n2) % 3 == 0)) {
        printf("Invalid!\n");
        printf("Enter n1>");
        scanf("%d", &n1);
        printf("Enter n2>");
        scanf("%d", &n2);
    };

    if (n1 >= n2) {
        large = n1;
        small = n2;
    } else {
        large = n2;
        small = n1;
    }
    for (int i = small; i <= large; i++) {
        printf("%d ", i);
    }
    printf("\n");
}