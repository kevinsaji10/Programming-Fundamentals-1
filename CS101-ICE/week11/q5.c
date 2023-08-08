#include <stdio.h>
#include <stdbool.h>

int binary_search(int n , int arr[], int target) {
    int upper = n-1;
    int lower = 0;
    int mid = lower + (upper - lower) /2;
    while (lower <= upper && target != mid) {
        if (target < arr[mid]) {
            upper = mid-1;
        } else if (target > arr[mid]) {
            lower = mid+1;
        } else {
            return mid;
        }
        mid = lower + (upper - lower) /2;
       
    }
    return -1;
}
    
int main(void) {
    int tc_num = 1;
    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:7\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 67);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:9\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 99);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:0\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 2);
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        int arr[] = {2, 3, 7, 11, 15, 33, 35, 67, 78, 99};
        printf("Test Case %d\n", tc_num++);
        printf("Expected:-1\n");
        int result = binary_search(sizeof(arr) / sizeof(int), arr, 5);
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}