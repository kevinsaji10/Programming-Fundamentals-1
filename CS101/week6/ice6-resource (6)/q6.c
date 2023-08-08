#include <stdio.h>
#include <math.h>
void print_pascal(int num) {
    int prev_num_arr[3] = {1, 2, 1};
    for (int i = 3; i< num; i++) {
        int next_num_arr[i+1];
        next_num_arr[0] = 1;
        for (int i = 4; i>=1; i--) {
            if (i ==4) {
                next_num_arr[i] = 1;
            }
            else {
                next_num_arr[i] = prev_num_arr[i] + prev_num_arr[i-1];
            }
        }

        for(int j = 0; i< i+1; i++) {
            int prev_num_arr[i+1];
            prev_num_arr[j] = next_num_arr[j];
            printf("%d ", next_num_arr[j]);
        }
    }


}
int main(void) {
    printf("Test 1\n");
    printf("Expected:\n");
    printf("1 \n");
    printf("1 1\n"); 
    printf("1 2 1\n");
    printf("1 3 3 1\n");
    printf("1 4 6 4 1\n");
    printf("Actual:\n");
    print_pascal(5);
    printf("\n");
    
    // printf("Test 2\n");
    // printf("Expected:\n");
    // printf("1\n");
    // printf("1 1\n"); 
    // printf("1 2 1\n"); 
    // printf("1 3 3 1\n");
    // printf("1 4 6 4 1\n");
    // printf("1 5 10 10 5 1\n");
    // printf("1 6 15 20 15 6 1\n");
    // printf("1 7 21 35 35 21 7 1\n");
    // printf("1 8 28 56 70 56 28 8 1\n");
    // printf("1 9 36 84 126 126 84 36 9 1\n");
    // printf("Actual:\n");
    // print_pascal(10);
}
