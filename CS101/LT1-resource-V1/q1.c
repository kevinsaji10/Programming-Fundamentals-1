/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */
#include <stdio.h>

char get_intensity(int training_heart_beat, int resting_heart_beat, int age) {
    double intensity = 100.0 * ((training_heart_beat- resting_heart_beat)/(220.0 - age - resting_heart_beat));
    if (intensity < 57) {
        return 'S';
    } else if (intensity >= 57 && intensity < 64) {
        return 'L';
    } else if (intensity >= 64 && intensity < 75) {
        return 'M';
    } else if (intensity >= 75 && intensity < 95) {
        return 'V';
    } else {
        return 'H';
    }
}

int main(void) {
    int tc_num = 1;

    // Example 1
    {
        int training_heart_beat = 100;
        int resting_heart_beat = 65;
        int age = 40;
        printf("Test case %d: get_intensity(%d, %d, %d)\n", tc_num++, training_heart_beat, resting_heart_beat, age);
        char result = get_intensity(training_heart_beat, resting_heart_beat, age);
        printf("Expected:S\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    // Example 2
    {
        int training_heart_beat = 124;
        int resting_heart_beat = 54;
        int age = 45;
        printf("Test case %d: get_intensity(%d, %d, %d)\n", tc_num++, training_heart_beat, resting_heart_beat, age);
        char result = get_intensity(training_heart_beat, resting_heart_beat, age);
        printf("Expected:L\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    // Example 3 (not in question paper)
    {
        int training_heart_beat = 140;
        int resting_heart_beat = 54;
        int age = 45;
        printf("Test case %d: get_intensity(%d, %d, %d)\n", tc_num++, training_heart_beat, resting_heart_beat, age);
        char result = get_intensity(training_heart_beat, resting_heart_beat, age);
        printf("Expected:M\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    // Example 4 (not in question paper)
    {
        int training_heart_beat = 155;
        int resting_heart_beat = 65;
        int age = 60;
        printf("Test case %d: get_intensity(%d, %d, %d)\n", tc_num++, training_heart_beat, resting_heart_beat, age);
        char result = get_intensity(training_heart_beat, resting_heart_beat, age);
        printf("Expected:V\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    // Example 5 (not in question paper)
    {
        int training_heart_beat = 165;
        int resting_heart_beat = 70;
        int age = 70;
        printf("Test case %d: get_intensity(%d, %d, %d)\n", tc_num++, training_heart_beat, resting_heart_beat, age);
        char result = get_intensity(training_heart_beat, resting_heart_beat, age);
        printf("Expected:H\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }
}
