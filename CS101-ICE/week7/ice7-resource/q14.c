#include <stdio.h>
#include <string.h>
int range(int numbers[], int n) {
    int largest = numbers[0];
    int smallest = numbers[0];
    if (n == 1 || (numbers[0] == numbers[1])) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return largest - smallest;
}

int main(void) {
    // think of your own test cases
    int numbers[] = {5, 7, 19, 2, 3, 6};
    printf("Expected: 17\n");
    printf("Actual: %d\n", range(numbers, sizeof(numbers) / sizeof(int)));

    int numbers2[] = {6, 6};
    printf("Expected: 1\n");
    printf("Actual: %d\n", range(numbers2, sizeof(numbers2) / sizeof(int)));

    int numbers3[] = {6};
    printf("Expected: 1\n");
    printf("Actual: %d\n", range(numbers3, 1));
}