/*
  Top-Down Design
  This may be a problem that is too complicated to solve by one function alone.
  1. Try breaking the problem down into sub-problems. Each sub-problem is a helper function.
  2. To identify a sub-problem, start writing the algorithm out.
  3. When you get to a step that seems too complicated, imagine you have a helper function that can solve that step.
     See if you can write the function by including a call to this imaginary function,
  4. The process can then be repeated on the helper functions until the solution is complete.
*/
#include <stdio.h>
double sum(int numbers[], double sample_mean, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (numbers[i] - sample_mean) * (numbers[i] - sample_mean);
    }
    return sum;
}

double calculate_variance(int numbers[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += numbers[i];
    }
    double sample_mean = total * 1.0 / n;
    printf("%lf\n", sample_mean);
    printf("%lf\n", sum(numbers, sample_mean, n));
    double variance = (sum(numbers, sample_mean, n)) / (n - 1);
    return variance;
}

int main(void) {
    {
        printf("Test 1\n");
        int numbers[] = {17, 15, 23, 7, 9, 13};
        double result = calculate_variance(numbers, 6);
        printf("Expected:33.200000\n");
        printf("Actual  :%lf\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int numbers[] = {1, 2};
        double result = calculate_variance(numbers, 2);
        printf("Expected:0.500000\n");
        printf("Actual  :%lf\n", result);
        printf("\n");
    }

    {
        // variance requires at least two data points
        // thus returns -1
        printf("Test 3\n");
        int numbers[] = {1};
        double result = calculate_variance(numbers, 1);
        printf("Expected:-1.000000\n");
        printf("Actual  :%lf\n", result);
    }
}
