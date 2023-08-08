#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
char converter(char c) {
    if ((c >= 65 && c <= 90)) {
        c += 32;
    }
    return c;
}
bool is_char(char c) {
    if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))) {
        return true;
    } else {
        return false;
    }
}
bool is_palindrome(char string[]) {
    int length = strlen(string);
    int j = length - 1;
    int i = 0;
    while (i <= j) {
        string[i] = converter(string[i]);
        string[j] = converter(string[j]);
        if (is_char(string[i]) && is_char(string[j])) {
            if (string[i] != string[j]) {
                return false;
            } else {
                j--;
                i++;
            }
        } else if (!(is_char(string[j]))) {
            j--;
        } else if (!(is_char(string[i]))) {
            i++;
        }
    }
    return true;
}

int main(void) {
    {
        printf("Test 1\n");
        char string[] = "madam";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 2\n");
        char string[] = "No 'x' in Nixon";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 3\n");
        char string[] = "bad, chocolate dab";
        bool result = is_palindrome(string);
        printf("Expected:False\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }
}
