#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// insert your function below

/**
 * Returns cashback in cents.
 */
// int get_cashback(double spendings[], int num_months) {

//     // Cashback
//     int result = 0;

//     // How many consecutive months has customer made minimum spend of $200?
//     int qualified_months = 0;

//     // Go through each month, which corresponds to two positions in the
//     // spendings array
//     for (int n = 0; n < num_months; n++) {

//         // Get DPG and non-DPG spending
//         int dpg_spending = spendings[2 * n + 0];
//         int non_dpg_spending = spendings[2 * n + 1];

//         // Cashback on non-DPG spending: 1% of non-DPG spending
//         double cashback_non_dpg = non_dpg_spending * 0.01;

//         // Base, which is 2% of DPG spending, capped at $100
//         double base = dpg_spending * 0.02;
//         if (base > 100) {
//             base = 100;
//         }

//         // Month bonus if non-DPG spending at least $200,
//         // capped at $150
//         double month_bonus = 0;
//         if (non_dpg_spending >= 200) {
//             month_bonus += dpg_spending * 0.075;
//             if (month_bonus >= 150) {
//                 month_bonus = 150;
//             }
//         }

//         // Quarter bonus if non-DPG spending at least $200 for each
//         // of last 3 months, capped at $250 for this month
//         double quarter_bonus = 0;
//         if (non_dpg_spending >= 200) {
//             qualified_months++;
//             if (qualified_months >= 3) {
//                 quarter_bonus = dpg_spending * 0.09;
//                 if (quarter_bonus > 250) {
//                     quarter_bonus = 250;
//                 }
//             }
//         } else {
//             qualified_months = 0;
//         }

//         result += (int) (100 * (cashback_non_dpg + base +
//                             month_bonus + quarter_bonus));
//     }

//     // Remember to convert from dollars to cents
//     return result;
// }
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
    double score = 0;
    {
        double spendings[] = {409, 150.5};
        int ans = 969;
        if (get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2) == ans) {
            score += 0.8;
        }
    }
    {
        double spendings[] = {400, 150};
        int ans = 950;
        if (get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2) == ans) {
            score += 0.8;
        }
    }
    {
        double spendings[] = {400, 300};
        int ans = 4100;
        if (get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2) == ans) {
            score += 0.8;
        }
    }
    {
        double spendings[] = {100, 100, 300, 300, 300, 300, 100, 100};
        int ans = 6900;
        if (get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2) == ans) {
            score += 0.8;
        }
    }
    {
        double spendings[] = {4999, 100, 3000, 300, 3000, 300, 5009, 100, 3000, 300, 3000, 3000, 3000, 300, 3399, 300};
        int ans = 201496;
            printf("%d \n",get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2));
        if (get_cashback(spendings, sizeof(spendings) / sizeof(double) / 2) == ans) {
            score += 0.8;
        }
        
    }
    printf("Total score    :%.1lf/4.0\n", score);
}