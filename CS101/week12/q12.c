#include <stdio.h>
#include <string.h>
int char_to_int(char number[]) {
    int multiplier = 1;
    int value = 0;
    for (int i = strlen(number)-1;i>=0;i--) {
        value += (number[i] - 48) * multiplier;
        multiplier*= 10;
    }
    return value;
}
int total(char str[]) {
    char string[strlen(str)+1];
    strcpy(string, str);
    char *token = strtok(string, " ");
    int value = 0;
    while(token != NULL) {
        value += char_to_int(token);
        token = strtok(NULL, " ");
    }
    return value;
}
int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:6\n");
        int result = total("1 2 3");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:3\n");
        int result = total("3");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:1368\n");
        int result = total("11 123 1234");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}