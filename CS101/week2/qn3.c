#include <stdio.h>

int main(void) {
    int n1;
    int n2;
    int n3;
    int small;
    int large;
    printf("Enter num: ");
    scanf("%d", &n1);
    printf("Enter num: ");
    scanf("%d", &n2);
    printf("Enter num: ");
    scanf("%d", &n3);
    if (n1 >= n2 && n1 >= n3) {
        large = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        large = n2;
    } else {
        large = n3;
    }

    if (n1 <= n2 && n1 <= n3) {
        small = n1;
    } else if (n2 <= n1 && n2 <= n3) {
        small = n2;
    } else {
        small = n3;
    }

    printf("Smallest is %d.\n", small);
    printf("Largest is %d.\n", large);

    /* 
    
    better way to do it is assign n1 to largest
    variable first. then compare largest with n2 and n3.
    so with 2 if statements the largest element is determined.

    repeat for smallest element.

    */
}