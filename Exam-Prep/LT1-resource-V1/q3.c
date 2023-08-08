/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */

#include <stdio.h>
#include <math.h>

int get_cashback(double spendings[], int num) {
    double total = 0;
    for (int i = 0; i< num*2; i = i+2) {
        double base = 0;
        double month_bonus = 0;
        double quarter_bonus = 0;
        base = 0.02 * spendings[i] + 0.01 * spendings[i+1];

        if (spendings[i+1] >= 200) {
            month_bonus = 0.075 * spendings[i];
            if (month_bonus > 150) {
                month_bonus = 150;
            }
        }
        if (i> 3 && spendings[i+1] >= 200) {
            quarter_bonus = 0.09 * spendings[i];
            if (quarter_bonus > 250) {
                quarter_bonus = 250;
            }
        }
        total += base + month_bonus + quarter_bonus;

    }
    return round(total *100); 
}

int main(void) {
    int tc_num = 1;

    // Example 1
    {
        printf("Test %d  :get_cashback({100, 199}, 1)\n", tc_num++);
        double spendings[] = {100, 199};
        printf("Expected:399\n");
        printf("Actual  :%d\n\n", get_cashback(spendings, 1));
    }

    // Example 2
    {
        printf("Test %d  :get_cashback({100, 300}, 1)\n", tc_num++);
        double spendings[] = {100, 300};
        printf("Expected:1250\n");
        printf("Actual  :%d\n\n", get_cashback(spendings, 1));
    }

    // Example 3
    {
        printf("Test %d  :get_cashback({100, 300, 2560, 345, 3000, 200, 100, 200}, 4)\n", tc_num++);
        double spendings[] = {100, 300, 2560, 345, 3000, 200, 100, 200};
        printf("Expected:69965\n");
        printf("Actual  :%d\n\n", get_cashback(spendings, 4));
    }
    
    // Example 4 (not in question paper)
    {
        printf("Test %d  :get_cashback({100, 300, 2560, 345, 3000, 200, 300, 150}, 4)\n", tc_num++);
        double spendings[] = {100, 300, 2560, 345, 3000, 200, 300, 150};
        printf("Expected:68665\n");
        printf("Actual  :%d\n\n", get_cashback(spendings, 4));
    }
    
    // Example 5 (not in question paper)
    {
        printf("Test %d  :get_cashback({100, 300, 200, 345, 400, 200, 300, 150}, 4)\n", tc_num++);
        double spendings[] = {100, 300, 200, 345, 400, 200, 300, 150};
        printf("Expected:11845\n");
        printf("Actual  :%d\n\n", get_cashback(spendings, 4));
    }
    
}