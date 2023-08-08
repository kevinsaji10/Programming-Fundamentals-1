#include <stdio.h>
int longest_sorted_subarray(int arr[], int n) {
    int best_count = 1;
    int count;
    int comparison;
    for (int i = 0; i < n - 1; i++) {
        comparison = i;
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[comparison] > arr[j]) {
                break;
            } else {
                count++;
                comparison++;
            }
        }
        if (count > best_count) {
            best_count = count;
        }
    }
    return best_count;
}
int main(void) {
    int tc_num = 1;
    {
        int arr[] = {2, 8, 11, 111, 19, 14, 7, -3, 0, 4, 27, 56, 98, 99};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:7\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
    {
        int arr[] = {-2, -8, -11, -111, -19, -14, -7, 3, 0, -4, -27, -56, -1};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:5\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {-1};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:1\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {1, 1, 3, 2};
        int result = longest_sorted_subarray(arr, sizeof(arr) / sizeof(int));
        printf("Test %d\n", tc_num++);
        printf("Expected:3\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}