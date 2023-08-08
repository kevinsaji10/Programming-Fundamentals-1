#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter char: ");
    scanf("%c", &ch);
    if (ch>= 97 && ch<= 122) {
        printf("%c is a lowercase letter.\n", ch);
    } 
    else if (ch>= 65 && ch<= 90) {
        printf("%c is a uppercase letter.\n", ch);
    }   
    else if (ch>= 48 && ch<= 57) {
        printf("%c is a digit.\n", ch);
    }   
    else {
        printf("%c is a special character.\n", ch);
    }     
}