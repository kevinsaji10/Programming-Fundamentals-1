#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sieve(int n, int** ptr_r, int* x) {
    // length of initial array containing all the integers from 2 to n
    int length = n-1;
    // create an int array ptr
    int ptr[length];
    // creation of initial array
    for (int i = 0; i<n-2; i++) {
        ptr[i] = i+2;
    }
    // initialize p to 2 and start index to 0
    int p = 2;
    int start_index = 0;
    while (p *p <= n) {
        // marking all the multiples of p
        for (int i = start_index + p; i<n; i = i + p) {
           ptr[i] = 0;
        }
        start_index++;
        // finding the next index that has an unmarked number
        while(ptr[start_index] == 0) {
            start_index++; 
        }
        // change the p to the next unmarked number
        p = ptr[start_index];
    }
    int count = 0;
    for (int i = 0; i< length; i++) {
        if ((ptr[i]) != 0) {
            count++;
        }
    }
    // create memory for the array containing primes
    *ptr_r = calloc(count, sizeof(int));
    int index = 0;
    // append the prime numbers into the result array
    for (int i = 0; i< length; i++) {
        if ((ptr[i]) != 0) {
            (*ptr_r)[index] = ptr[i];
            index++;
        }
    }
    // change n to length of result array
    *x = count;

}

int main(void) {
    {
        int *result = NULL;
        int n = 0;
        sieve(30, &result, &n);
        printf("Expected:2 3 5 7 11 13 17 19 23 29\n");
        printf("Actual  :");
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
}