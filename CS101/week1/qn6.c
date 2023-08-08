#include <stdio.h>

int main(void) {
    double males;
    double females;
    printf("Enter num males: ");
    scanf("%lf", &males);
    printf("Enter num females: ");
    scanf("%lf", &females);
    double percentage_females = 100*(females/(males+females));
    printf("Percentage (females): %.1lf%%\n" , percentage_females);

}