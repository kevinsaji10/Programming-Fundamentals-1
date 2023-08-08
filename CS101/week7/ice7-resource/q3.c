#include <stdio.h>

// taken from ICE6 Q7.
// note: bubble sort is one of the slowest sort. :)
// Useful site: https://visualgo.net/en/sorting?slide=1

void bubble_sort(int values[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
}
double get_median(int arr[], int length) {
    bubble_sort(arr, length);
    double mid = 0;
    if (length % 2 == 0) {
        mid = (arr[(length / 2) - 1] + arr[length / 2]) / 2.0;
    } else {
        mid = arr[length / 2];
    }
    return mid;
}

void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main(void) {
    {
        printf("Test 1\n");
        int values[] = {1, 3, 5};
        double result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:3.000000\n");
        printf("Actual  :%lf\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {20, 3, 5, 2, 10, 2, 4, 6, 8, 10};
        double result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:5.500000\n");
        printf("Actual  :%lf\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {20, 4, 2, 10, 2, 4};
        int result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:4\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {3};
        int result = get_median(values, sizeof(values) / sizeof(int));
        printf("Expected:3\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
