#include <stdio.h>

int main(void) {
    double monthy_sales;
    int commission_rate;
    double pay;
    printf("Enter the amount of monthly sales: ");
    scanf("%lf", &monthy_sales);
    if (monthy_sales < 10000) {
        commission_rate = 5;
        pay = 2000 + commission_rate / 100.0 * monthy_sales;
        printf("Commission rate for the monthly sale of $%.1lf is %d%%\n", monthy_sales, commission_rate);
        printf("The monthly pay of the salesperson is $%.2lf\n", pay);
    } else if (monthy_sales > 10000 && monthy_sales < 15000) {
        commission_rate = 10;
        pay = 2000 + commission_rate / 100.0 * monthy_sales;
        printf("Commission rate for the monthly sale of $%.1lf is %d%%\n", monthy_sales, commission_rate);
        printf("The monthly pay of the salesperson is $%.2lf\n", pay);
    } else if (monthy_sales < 18000 && monthy_sales > 15000) {
        commission_rate = 15;
        pay = 2000 + commission_rate / 100.0 * monthy_sales;
        printf("Commission rate for the monthly sale of $%.1lf is %d%%\n", monthy_sales, commission_rate);
        printf("The monthly pay of the salesperson is $%.2lf\n", pay);
    } else {
        commission_rate = 18;
        pay = 2000 + commission_rate / 100.0 * monthy_sales;
        printf("Commission rate for the monthly sale of $%.1lf is %d%%\n", monthy_sales, commission_rate);
        printf("The monthly pay of the salesperson is $%.2lf\n", pay);
    }
}