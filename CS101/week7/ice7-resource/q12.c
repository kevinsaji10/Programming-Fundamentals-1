#include <stdio.h>
#include <string.h>
int index_of(int numbers[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (numbers[i] == target) {
            return i;
        }
    }
    return -1;
}
int main(void) {
    // think of your own test cases
    int numbers[] = {5, 7, 9, 2, 3, 6};
    int target = 6;
    printf("Expected: 5\n");
    printf("Actual: %d\n", index_of(numbers, target, sizeof(numbers) / sizeof(int)));

    int numbers2[] = {5, 7, 9, 2, 3, 6};
    int target2 = 10;
    printf("Expected: -1\n");
    printf("Actual: %d\n", index_of(numbers2, target2, sizeof(numbers) / sizeof(int)));
}