#include <stdio.h>
#include <stdbool.h>
#include "answer.h"

bool is_sorted_asc(int arr[], int n) {
    if (n <= 1) {
        return true;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int tc_num = 1;
    {
        int arr[] = {1, 2, 3};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {1, 1, 2, 3};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {1, 2, 3, 1};
        printf("Test %d\n", tc_num++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

   {
        int arr[] = {1};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {3, 2, 1};
        printf("Test %d\n", tc_num++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }

    {
        int arr[] = {-30, -1, 0, 30, 50, 60, 77};
        printf("Test %d\n", tc_num++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_sorted_asc(arr, sizeof(arr)/sizeof(int)) ? "true" : "false");
        printf("\n");
    }
}
