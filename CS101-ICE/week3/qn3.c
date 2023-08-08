#include <stdio.h>
int main(void) {
    int n1;
    int n;
    printf("Enter n1: ");
    scanf("%d", &n1);
    int smallest_value = n1;
    int largest_value = n1;
    printf("Largest so far == %d ", n1);
    printf("Smallest so far == %d\n", n1);
    for (int i = 0; i< 4; i++) {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n < smallest_value) {
            smallest_value = n;
            printf("Largest so far == %d ", largest_value);
            printf("Smallest so far == %d\n", smallest_value);
        } else if (n > largest_value) {
            largest_value = n;
            printf("Largest so far == %d ", largest_value);
            printf("Smallest so far == %d\n", smallest_value);
        } else {
            printf("Largest so far == %d ", largest_value);
            printf("Smallest so far == %d\n", smallest_value);
        }
    }
    
}
