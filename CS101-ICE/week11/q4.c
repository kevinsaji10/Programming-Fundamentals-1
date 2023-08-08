#include <stdio.h>
#include <stdlib.h>
void sort(int arr[], int length) {
    int temp = 0;
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int intersection_of_2(int size1, int arr1[], int size2, int arr2[], int **result) {
    sort(arr1, size1);
    sort(arr2, size2);
    int *result_arr = calloc(size1 + size2, sizeof(int));
    int *ptr = result_arr;
    *result = result_arr;
    int index1 = 0;
    int index2 = 0;
    int count = 0;
    while(index1 < size1 && index2 < size2) {
        if (arr1[index1] == arr2[index2]) {
            *result_arr = arr1[index1];
            index1++;
            index2++;
            result_arr++;
            count++;

        } else if (arr1[index1] < arr2[index2]) {
            index1++;
        } else if (arr1[index1] > arr2[index2]) {
            index2++;
        }
    }
    result_arr = ptr;
    *result = realloc(result_arr, sizeof(int) * count);
    return count;
}

void print_array(int n, int arr[]) {
    if (n == 0) {
        printf("><\n");
        return;
    }
    printf(">");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d<\n", arr[n - 1]);
}

int main(void) {
    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {3, 4, 5, 6};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 1\n");
        printf("Expected:>3 5<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {4, 6, 9, 10};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 2\n");
        printf("Expected:><\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 9, 11};
        int arr2[] = {4, 6, 9, 10};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 3\n");
        printf("Expected:>9<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }

    {
        //
        int arr1[] = {1, 3, 5, 5};
        int arr2[] = {3, 5, 5, 9};
        int *result;
        int n = intersection_of_2(sizeof(arr1) / sizeof(int), arr1, sizeof(arr2) / sizeof(int), arr2, &result);
        printf("Test 4\n");
        printf("Expected:>3 5 5<\n");
        printf("Actual  :");
        print_array(n, result);
        printf("\n");
        free(result);
    }
}