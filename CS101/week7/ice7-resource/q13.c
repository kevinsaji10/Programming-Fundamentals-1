#include <stdio.h>
#include <string.h>
int last_index_of(int numbers[], int target, int n) {
    int last_index = -1;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == target) {
            last_index = i;
        }
    }
    return last_index;
}

int main(void) {
    // think of your own test cases
    int numbers[] = {5, 7, 9, 2, 3, 6};
    int target = 6;
    printf("Expected: 5\n");
    printf("Actual: %d\n", last_index_of(numbers, target, sizeof(numbers) / sizeof(int)));

    int numbers2[] = {5, 7, 9, 2, 3, 6};
    int target2 = 10;
    printf("Expected: -1\n");
    printf("Actual: %d\n", last_index_of(numbers2, target2, sizeof(numbers) / sizeof(int)));

    int numbers3[] = {6, 7, 9, 2, 6, 5};
    int target3 = 6;
    printf("Expected: 4\n");
    printf("Actual: %d\n", last_index_of(numbers3, target3, sizeof(numbers) / sizeof(int)));
}