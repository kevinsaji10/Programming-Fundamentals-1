#include <stdio.h>
void print_even_numbers(int max) {
    for (int i = 2; i<=max; i+=2) {
        if (i == 2) {
            printf("{%d}", i);
        } else {
        printf(" {%d}", i);
        }
    }

    
}


int main(void) {
    printf("Test 1\n");
    printf("Expected:[{2}]\n");
    printf("Actual  :[");
    print_even_numbers(2);
    printf("]\n\n");

    printf("Test 2\n");
    printf("Expected:[]\n");
    printf("Actual  :[");
    print_even_numbers(1);
    printf("]\n\n");

    printf("Test 3\n");
    printf("Expected:[]\n");
    printf("Actual  :[");
    print_even_numbers(-3);
    printf("]\n\n");

    printf("Test 4\n");
    printf("Expected:[{2} {4} {6} {8} {10} {12}]\n");
    printf("Actual  :[");
    print_even_numbers(13);
    printf("]\n\n");

    printf("Test 4\n");
    printf("Expected:[{2} {4} {6} {8} {10} {12} {14}]\n");
    printf("Actual  :[");
    print_even_numbers(14);
    printf("]\n\n");

}