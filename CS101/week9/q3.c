#include <stdio.h>
int length(char string[]) {
    int count = 0;
    while (*string != '\0') {
        string++;
        count++;
    }
    return count;
}
void my_strlwr(char string[]) {
    for (int i = 0; i < length(string); i++) {
        if (string[i] >= 65 && string[i] < 90) {
            string[i] += 32;
        }
    }
}

int main(void) {
    {
        char string[] = "APPLE";
        my_strlwr(string);
        printf("Test 1\n");
        printf("Expected:apple\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }

    {
        char string[] = "";
        my_strlwr(string);
        printf("Test 2\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", string);
        printf("\n");
    }

    {
        char string[] = "There is 1 APPLE.";
        my_strlwr(string);
        printf("Test 3\n");
        printf("Expected:there is 1 apple.\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }

    {
        char string[] = "happy";
        my_strlwr(string);
        printf("Test 4\n");
        printf("Expected:happy\n");
        printf("Actual  :%s\n", string);
        printf("\n");
    }
}