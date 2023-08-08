#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the height of the tree, greater than 9: ");
    scanf("%d", &n);
    int n1 =  n-5;
        if (n >= 10) {
            for (int i = 0; i<n1-1;i++) {
                for (int j = 1; j<n1*2; j++) {
                    if (j<n1-i || j>n1+i) {
                        printf(" ");
                    } else {
                        printf("*");
                    }
                }
                printf("\n");
            }
            for (int i = 0; i<5; i++) {
                for (int j = 0; j<n1-1; j++) {
                    printf(" ");
                }
                printf("*\n");
            }
        } else {
            printf("Enter a number greater than 9.\n");
        }

}