#include <stdio.h>
void print_largest_two(int arr[], int n) {
    int largest = arr[0];
    int largest_index = 0;
    if (n == 1) {
        printf("#1 = %d", largest);
    }
    if (n>1) {
        for (int i = 0; i<n;i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            largest_index = i;
            }
        }
        int second_largest = arr[0];
        if (largest_index == 0) {
            second_largest = arr[1];
        }
        for (int i = 0; i<n;i++) {
            if (arr[i] > second_largest && i != largest_index) {
                second_largest = arr[i];
            }
        }
        printf("#1 = %d, #2 = %d\n", largest, second_largest);
    }
    
    
    
}

int main(void) {
    {
        int numbers[] = {13, 5, 6, 11};
        printf("Test 1\n");
        printf("Expected:#1 = 13, #2 = 11\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 13, 6, 11};
        printf("Test 2\n");
        printf("Expected:#1 = 13, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 11, 1, 8, 2, 3, 5, 6, 6, 13};
        printf("Test 3\n");
        printf("Expected:#1 = 13, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {13, 11, 1, 8, 2, 3, 5, 6, 6, 17};
        printf("Test 4\n");
        printf("Expected:#1 = 17, #2 = 13\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {21, 11, 1, 8, 2, 3, 5, 6, 6, 17};
        printf("Test 1\n");
        printf("Expected:#1 = 21, #2 = 17\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {1, 2};
        printf("Test 1\n");
        printf("Expected:#1 = 2, #2 = 1\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }

    {
        int numbers[] = {1};
        printf("Test 1\n");
        printf("Expected:#1 = 1\n");
        printf("Actual  :");
        print_largest_two(numbers, sizeof(numbers) / sizeof(int));
        printf("\n");
    }


}