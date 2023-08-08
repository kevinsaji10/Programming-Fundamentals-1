#include <stdbool.h>
#include <stdio.h>
int my_strlen(char string[]) {
    bool found = false;
    int i = 0;
    int length = 0;
    while (!(found)) {
        if (string[i] == '\0') {
            found = true;
        } else {
            length++;
            i++;
        }
    }
    return length;
}
int my_strcmp(char string1[], char string2[]) {
    int length1 = my_strlen(string1);
    int length2 = my_strlen(string2);
    int shorter;
    int longer;
    if (length1 > length2) {
        longer = length1;
        shorter = length2;

    } else {
        longer = length2;
        shorter = length1;
    }
    int diff = 0;
    for (int i = 0; i < shorter; i++) {
        diff += (string1[i] - string2[i]);
    }
    if (longer == length2) {
        diff += -string2[shorter];
    } else {
        diff += string1[shorter];
    }
    return diff;
}
int main(void) {
    {
        printf("Test 1\n");
        int result = my_strcmp("abc", "abb");
        printf("Expected:1\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int result = my_strcmp("ab", "abcdef");
        printf("Expected:-99\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = my_strcmp("abcdef", "ab");
        printf("Expected:99\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 4\n");
        int result = my_strcmp("AB", "Ab");
        printf("Expected:-32\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 5\n");
        int result = my_strcmp("", "Ab");
        printf("Expected:-65\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
