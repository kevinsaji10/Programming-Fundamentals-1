#include <math.h>
#include <stdio.h>
int main(void) {
    int num;
    int digits = 1;
    printf("Enter num: ");
    scanf("%d", &num);
    int original_num = num;
    while (num / 2 != 0) {
        digits++;
        num = num / 2;
    }
    // create an integer with all 1s for the length of binary number
    int value = 0;
    for (int i = 0; i < digits; i++) {
        value = (value * 10) + 1;
    }
    // subtract powers of 10 whenever the remainder is 0 to convert the necessary 1s to 0s in the integer
    int subtract = 1;
    for (int i = 0; i < digits - 1; i++) {
        if (original_num % 2 == 0) {
            value = value - subtract;
        }
        original_num = original_num / 2;
        subtract *= 10;
    }
    printf("%d\n", value);
}
