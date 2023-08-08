// Author: Jason Chan
#include <math.h>
#include <stdbool.h>
#include <stdio.h>


// insert your function below


int main(void) {
    int score = 0;
    {
        char h2[] = {'A', 'C', 'A', 'B'};
        char h1 = '-';
        char gp = 'C';
        char pw = 'C';
        char mtl = '-';
        double answer = 80.00;
        if (fabs(calculate_uas(h2, h1, gp, pw, mtl) - answer) < 0.001) {
            score += 1;
        }
    }

    {
        char h2[] = {'C', 'C', 'B'};
        char h1 = 'E';
        char gp = 'D';
        char pw = 'D';
        char mtl = 'A';
        double answer = 67.50;
        if (fabs(calculate_uas(h2, h1, gp, pw, mtl) - answer) < 0.001) {
            score += 1;
        }
    }

    {
        char h2[] = {'C', 'C', 'B'};
        char h1 = 'B';
        char gp = 'C';
        char pw = 'C';
        char mtl = 'D';
        double answer = 71.25;

        if (fabs(calculate_uas(h2, h1, gp, pw, mtl) - answer) < 0.001) {
            score += 1;
        }
    }

    {
        char h2[] = {'U', 'B', 'C'};
        char h1 = 'D';
        char gp = 'E';
        char pw = 'S';
        char mtl = '-';
        double answer = 46.25;

        if (fabs(calculate_uas(h2, h1, gp, pw, mtl) - answer) < 0.001) {
            score += 1;
        }
    }
    printf("Total score    :%d/4\n", score);
}
