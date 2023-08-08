#include <stdio.h>

// insert your function below


int main(void) {

    int num[] = {123456789, 21, 2, 123456, 167};
    int look_for[] = {1, 21, 1, 53, 71};
    int ans[] = {177, 0, 1, 50, -1};

    int score = 0;
    int n = sizeof(num) / sizeof(int);
    for (int i = 0; i < n; i++) {
        if (ans[i] == get_num_steps(num[i], look_for[i])) {
            score += 1;
        }
    }
    printf("Total score    :%d/5\n", score);
}