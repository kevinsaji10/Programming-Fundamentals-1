#include <stdio.h>

// insert your function below


int main(void) {
    int training[] = {120, 127, 120, 192, 190};
    int resting[] = {70, 65, 80, 67, 50};
    int age[] = {50, 50, 80, 21, 23};
    char result[] = {'S', 'L', 'M', 'V', 'H'};

    int num_tc_passed = 0;
    int n = sizeof (training)/sizeof(int);
    for (int i = 0; i  < n; i++) {
        if (result[i] == get_intensity(training[i], resting[i], age[i])) {
            num_tc_passed += 1;
        }
    }
    printf("Total TC passed:%d\n", num_tc_passed);
    printf("Total score    :%.1lf/8.0\n", num_tc_passed * 1.6);
    
}
