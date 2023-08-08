#include <stdio.h>
int partition(int arr[], int lo, int hi) {
    int pivot = arr[hi];
    int i = lo;
    for (int j = lo; j<= hi; j++) {
        if (arr[j] < pivot) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
        
    }
    int temp1 = arr[i];
    arr[i] = arr[hi];
    arr[hi] = temp1;
    return i;
}
void quicksort (int arr[], int lo, int hi) {
    if (lo < hi) {
        int pivot = partition(arr, lo, hi);
        quicksort(arr, lo, pivot-1);
        quicksort(arr, pivot+1, hi);
    }
}
void print_array(int n, int arr[]) {
    for (int i = 0; i< n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    {
        int arr[] = {3, 7, 8, 5, 2, 1, 9, 5, 4};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {1, 2, 4};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {5, 3, 1};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }

    {
        int arr[] = {5};
        printf("Test 1\n");
        printf("Before:");
        print_array(sizeof(arr) / sizeof(int), arr);
        quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
        printf("After :");
        print_array(sizeof(arr) / sizeof(int), arr);
        printf("\n");
    }
}
