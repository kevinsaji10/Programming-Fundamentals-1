#include <stdio.h>
#include <string.h>
int mode(int numbers[], int n) {
    if (n == 1) {
        return numbers[0];
    }
    int bestfreq = 0;
    int bestnum = 0;
    for (int i = 1; i < n; i++) {
        int freq = 1;
        while (i < n && (numbers[i - 1] == numbers[i])) {
            freq++;
            i++;
        }
        if (freq > bestfreq) {
            bestfreq = freq;
            bestnum = numbers[i - 1];
        }
    }
    return bestnum;
}

int main(void) {
    // think of your own test cases
    int numbers[] = {1, 1, 2, 2, 2};
    printf("Expected: 2\n");
    printf("Actual: %d\n", mode(numbers, sizeof(numbers) / sizeof(int)));

    int numbers2[] = {1, 2, 3, 4, 5, 5, 5, 6, 6, 6};
    printf("Expected: 5\n");
    printf("Actual: %d\n", mode(numbers2, sizeof(numbers2) / sizeof(int)));

    int numbers3[] = {4};
    printf("Expected: 4\n");
    printf("Actual: %d\n", mode(numbers3, 1));
}