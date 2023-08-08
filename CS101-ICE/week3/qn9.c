#include <stdio.h>

int main (void) {
    int count;
    int start;
    printf("Enter count of ascending sequence: ");
    scanf("%d", &count);
    printf("Enter the starting digit: ");
    scanf("%d", &start);
    for (int i = 1; i<=count; i++){
        for (int j = 0; j<i;j++){
            printf("%d", start+j);
        }
        printf(" ");

    }
}
    
