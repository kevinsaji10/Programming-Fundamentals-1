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
void union_of_2(int size1, int arr1[], int size2, int arr2[], int **result) {
    int *result_arr = calloc(size1 + size2, sizeof(int));
    int *ptr = result_arr;
    *result = result_arr;
    for (int i = 0; i < size1 + size2; i++) {
        if(i <size1) {
            *result_arr = *arr1;
            arr1++;
        } else {
            *result_arr = *arr2;
            arr2++;
        }
        result_arr++;
            
    }
    result_arr = ptr;
    sort(result_arr, size1+ size2);
}
void print_array(int n, int arr[n]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int tc_num = 1;
    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {2, 4, 6};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 7};
        int arr2[] = {2, 4, 6};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6 7\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {2, 4, 6, 8};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 2 3 4 5 6 8\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5};
        int arr2[] = {7, 9};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 3 5 7 9\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }

    {
        int arr1[] = {1, 3, 5, 8, 9};
        int arr2[] = {7, 9, 9};
        int *result = NULL;
        int n1 = sizeof(arr1) / sizeof(int);
        int n2 = sizeof(arr2) / sizeof(int);
        union_of_2(n1, arr1, n2, arr2, &result);
        printf("Test %d\n", tc_num++);
        printf("Expected:1 3 5 7 8 9 9 9\n");
        printf("Actual  :");
        print_array(n1 + n2, result);
        printf("\n");
        free(result);
    }
}