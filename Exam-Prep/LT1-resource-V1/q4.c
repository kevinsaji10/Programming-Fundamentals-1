/*
 * KEVIN K Saji :
 * Email: kevink.saji.2022
 */

#include <stdbool.h>
#include <stdio.h>
double grade_checker_h2 (char grade) {
    if (grade == 'A') {
        return 20;
    } else if(grade == 'B') {
        return 17.5;
    } else if(grade == 'C') {
        return 15;
    } else if(grade == 'D') {
        return 12.5;
    } else if(grade == 'E') {
        return 10;
    } else if(grade == 'S') {
        return 5;
    } else {
        return 0;
    }
}
double calculate_uas(char h2_mods[], char content, char gp, char pw, char mtl) {
    int length_h2_mods;
    int worst_score_index = 0;
    if (content == '-') {
        length_h2_mods = 4;
        int worst_score_index = 0;
        for (int i = 0; i< length_h2_mods; i++) {
            if(grade_checker_h2(h2_mods[i]) < grade_checker_h2(h2_mods[worst_score_index])) {
                worst_score_index = i;
                
            }
        }
        // printf("windex%d\n", worst_score_index);
    } else {
        length_h2_mods = 3;
    }
    double total_points = 0;
    if (content != '-') {
        total_points += grade_checker_h2(content) /2;
    }
    if (length_h2_mods == 4) {
        for (int i = 0; i< length_h2_mods; i++) {
            if (i == worst_score_index) {
            total_points += grade_checker_h2(h2_mods[i]) / 2;
            } else {
                total_points += (grade_checker_h2(h2_mods[i]));
            }
            // printf("%c\n", h2_mods[i]);
            // printf("points%lf\n", grade_checker_h2(h2_mods[i]));
            // printf("total%lf\n", total_points);     
        
        }
    }
    // printf("%c\n", gp);
    // printf("%c\n", pw);
    // printf("%c\n", mtl);
    total_points += (grade_checker_h2(gp)/2) + (grade_checker_h2(pw)/2);
    if (mtl == '-') {
        return ((total_points)/90) *100;
    } else {
        return ((total_points + grade_checker_h2(mtl)));
    }
    
}

int main(void) {
    int tc_num = 1;

    // Example 1
    {
        char h2[] = {'A', 'A', 'A', 'B'};
        char h1 = '-';
        char gp = 'A';
        char pw = 'A';
        char mtl = 'A';
        printf("Test %d:calculate_uas({'A', 'A', 'A', 'B'}, '-', 'A', 'A', 'A')\n", tc_num++);
        printf("Expected:88.88\n");
        printf("Actual  :%.2lf\n\n", calculate_uas(h2, h1, gp, pw, mtl));
    }

    // Example 2
    {
        char h2[] = {'A', 'A', 'A'};
        char h1 = 'B';
        char gp = 'A';
        char pw = 'B';
        char mtl = '-';
        printf("Test %d:calculate_uas({'A', 'A', 'A'}, 'B', 'A', 'B', '-')\n", tc_num++);
        printf("Expected:87.50\n");
        printf("Actual  :%.2lf\n\n", calculate_uas(h2, h1, gp, pw, mtl));
    }

    // Example 3
    {
        char h2[] = {'A', 'C', 'B'};
        char h1 = 'B';
        char gp = 'A';
        char pw = 'B';
        char mtl = 'D';
        printf("Test %d:calculate_uas({'A', 'C', 'B'}, 'B', 'A', 'B', 'D')\n", tc_num++);
        printf("Expected:80.00\n");
        printf("Actual  :%.2lf\n\n", calculate_uas(h2, h1, gp, pw, mtl));
    }

    // Example 4 (not in question paper)
    {
        char h2[] = {'B', 'C', 'B'};
        char h1 = 'B';
        char gp = 'A';
        char pw = 'C';
        char mtl = 'A';
        printf("Test %d:calculate_uas({'B', 'C', 'B'}, 'B', 'A', 'C', 'A')\n", tc_num++);
        printf("Expected:77.62\n");
        printf("Actual  :%.2lf\n\n", calculate_uas(h2, h1, gp, pw, mtl));
    }
}
