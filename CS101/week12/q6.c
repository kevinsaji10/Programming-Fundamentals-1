#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool repeat(char str[], char target) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count > 1 ? true : false;
}
char *get_repeated_lowercase_letters(char str[]) {
    char letter = 'a';
    int tracker[27] = {0};
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (repeat(str, letter)) {
            tracker[i] = 1;
            count++;
        }
        letter++;
    }
    char *result = calloc(count + 1, sizeof(char));
    result[count] = '\0';
    letter = 'a';
    char *ptr = result;
    for (int i = 0; i < 26; i++) {
        if (tracker[i] == 1) {
            *result = letter + i;
            result++;
        }
    }
    result = ptr;
    return result;
}

int main(void) {
    int tc_num = 1;
    {
        char *result = get_repeated_lowercase_letters("abca");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:a\n");
        printf("Actual  :%s\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_repeated_lowercase_letters("The cat jumps over the wall.");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:aehlt\n");
        printf("Actual  :%s\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_repeated_lowercase_letters("...");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:[]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }
}