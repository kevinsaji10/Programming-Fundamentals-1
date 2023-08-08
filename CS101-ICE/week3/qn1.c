#include <math.h>
#include <stdio.h>
int main(void) {
    double p;
    double r;
    int n;
    int t;
    double A;
    printf("Initial Deposit (P): ");
    scanf("%lf", &p);
    printf("Annual interest rate (%%): ");
    scanf("%lf", &r);
    printf("Annual compound frequency (1 to 12): ");
    scanf("%d", &n);
    printf("Num of years (t): ");
    scanf("%d", &t);
    A = p * pow((1 + (r/100) / n), (n * t));
    printf("Amount after %d years is %.2lf\n",t, A);
}
