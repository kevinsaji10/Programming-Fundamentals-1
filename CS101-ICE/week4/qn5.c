#include <stdio.h>

int main(void) {
    char c;
    printf("Enter letter: ");
    scanf(" %c", &c);
    while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        // using switch statement
        switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel\n");
            break;
        default:
            printf("consonant\n");
        }
        printf("Enter letter: ");
        scanf(" %c", &c);
    }
    printf("Bye bye\n");
}

int main(void) {
    char c;
    printf("Enter letter: ");
    scanf(" %c", &c);
    while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        // using if statement
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("vowel\n");
        } else {
            printf("consonant\n");
        }
        printf("Enter letter: ");
        scanf(" %c", &c);
    }
    printf("Bye bye\n");
}
