#include <stdio.h>
void swap(int arr[], int index, int first) {
    int temp = arr[index];
    arr[index] = arr[first];
    arr[first] = temp;
}
void rotate_once(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        swap(arr, i, 0);
    }
}

void rotate(int arr[], int size, int n) {
    for (int i = 0; i < n; i++) {
        rotate_once(arr, size);
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    {
        int arr[] = {1, 2, 3, 4, 5};
        rotate(arr, sizeof(arr) / sizeof(int), 2);
        printf("Expected:3 4 5 1 2\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }

    {
        int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
        rotate(arr, sizeof(arr) / sizeof(int), 5);
        printf("Expected:7 8 9 1 2 3 4 5\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }

    {
        int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
        rotate(arr, sizeof(arr) / sizeof(int), 10);
        printf("Expected:3 4 5 7 8 9 1 2\n");
        printf("Actual  :");
        print_array(arr, sizeof(arr) / sizeof(int));
        printf("\n");
    }
}