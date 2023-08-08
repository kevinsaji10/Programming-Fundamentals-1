#include <stdio.h>

int main(void) {
    char sex;
    int age;
    printf("Enter sex: ");
    scanf("%c", &sex);
    printf("Enter age: ");
    scanf("%d", &age);
    if (sex == 'M' || sex == 'm') {
        if (age < 25) {
            printf("20.50\n");
        } else if (age >= 25 && age < 30) {
            printf("30.40\n");
        } else if (age >= 30 && age < 65) {
            printf("60.70\n");
        } else {
            printf("70.70\n");
        }
    } else {
        if (age < 25) {
            printf("30.60\n");
        } else if (age >= 25 && age < 30) {
            printf("50.70\n");
        } else if (age >= 30 && age < 65) {
            printf("99.80\n");
        } else {
            printf("120.30\n");
        }

    }
}