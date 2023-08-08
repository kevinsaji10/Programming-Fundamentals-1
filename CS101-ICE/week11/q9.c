#include <stdbool.h>
#include <stdio.h>
// is there an easier way to do this? how to sort a 2D array. if can sort then just need to check adjacent
// elements in sorted array for dupes but if its 2D how to check adjacent elements
bool duplicate_large_num(int n, int arr[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int current_num = arr[i][j];
            if (current_num / 10 != 0) {
                return true;
            }
            for (int k = 0; k < n; k++) {
                for (int m = 0; m < n; m++) {
                    if (arr[i][j] == arr[k][m] && (!(i == k && j == m))) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
bool is_magic_square(int n, int values[][n]) {
    // check if duplicate is present or there is a num larger than 9 present
    if (duplicate_large_num(n, values)) {
        return false;
    }
    int value_diag_1 = 0;
    int value_diag_2 = 0;
    // k is to use for checking second diagonal line
    int k = n-1;
    for (int i = 0; i < n; i++) {
        int value_row = 0;
        int value_column = 0;
        value_diag_1 += values[i][i];
        value_diag_2 += values[i][k];
        for (int j = 0; j < n; j++) {
            value_row += values[i][j];
            value_column += values[j][i];
        }
        k--;
        if (value_column != 15 || value_row != 15) {
                return false;
        }  
    }
    if (value_diag_1 != 15 || value_diag_2 != 15)  {
        return false;
    }
    return true;

}

int main(void) {
    {
        int values[][3] = {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}};
        printf("Test 1:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
        printf("Test 2:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
        printf("Test 3:%s\n", is_magic_square(3, values) ? "Pass" : "Fail");
        printf("\n");
    }
    {
        int values[][3] = {{5, 5, 5}, {5, 5, 5}, {5, 5, 5}};
        printf("Test 4:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
    {
        int values[][3] = {{2, 6, 7}, {9, 5, 1}, {4, 3, 8}};
        printf("Test 5:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
    {
        int values[][3] = {{10, 4, 1}, {1, 5, 9}, {4, 6, 5}};
        printf("Test 6:%s\n", is_magic_square(3, values) ? "Fail" : "Pass");
        printf("\n");
    }
}
