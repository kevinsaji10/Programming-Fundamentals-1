#include <stdio.h>

int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                printf("%c", 'A' + i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int counter = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == counter) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        counter++;
    }
}
