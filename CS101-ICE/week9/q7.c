#include <stdio.h>
char *my_strchr(char array[], char look_for) {
    char *ptr = NULL;
    while (*array != 0) {
        if (*array == look_for) {
            ptr = array;
            return ptr;
        } else {
            array++;
        }
    }
    return ptr;
}

int main(void) {
    {
        char *word = "abc123";
        printf("Test 1\n");
        printf("Expected:abc123\n");
        printf("Actual  :%s\n", my_strchr(word, 'a'));
        printf("\n");
    }

    {
        char *word = "abc123";
        printf("Test 2\n");
        printf("Expected:123\n");
        printf("Actual  :%s\n", my_strchr(word, '1'));
        printf("\n");
    }

    {
        char *word = "abc123";
        printf("Test 3\n");
        printf("Expected:123\n");
        printf("Actual  :%s\n", my_strchr(word, '1'));
        printf("\n");
    }

    {
        char *word = "abc123";
        printf("Test 4\n");
        printf("Expected:(null)\n");
        printf("Actual  :%s\n", my_strchr(word, '9'));
        printf("\n");
    }

    {
        char *word = "abc123";
        printf("Test 5\n");
        printf("Expected:True\n");
        printf("Actual  :%s\n", my_strchr(word, '9') == NULL ? "True" : "False");
        printf("\n");
    }
}