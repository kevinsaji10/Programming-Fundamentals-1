#include <stdbool.h>
#include <stdio.h>
#include <string.h>
char *my_strstr(char haystack[], char needle[]) {
    char *ptr1 = needle;
    char *ptr2 = haystack;
    int length_needle = strlen(needle);
    while (*ptr2 != '\0') {
        int count = 0;
        needle = ptr1;
        haystack = ptr2;
        while (*needle != '\0' && *haystack != '\0') {
            if (*needle == *haystack) {
                count++;
            }
            needle++;
            haystack++;
        }
        if (count == length_needle) {
            return ptr2;
        } else {
            ptr2++;
        }
    }
    return NULL;
}

int main(void) {
    {
        char *haystack = "this is a simple string";
        char *needle = "simple";
        printf("Test 1\n");
        printf("Expected:simple string\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "this is a simple string";
        char *needle = "";
        printf("Test 2\n");
        printf("Expected:this is a simple string\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "C is a wonderful language";
        char *needle = "Python";
        printf("Test 3\n");
        printf("Expected:(null)\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and oranges";
        char *needle = "apple";
        printf("Test 4\n");
        printf("Expected:apples and oranges\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and oranges";
        char *needle = "orange";
        printf("Test 5\n");
        printf("Expected:oranges\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }

    {
        char *haystack = "apples and orange";
        char *needle = "orangest";
        printf("Test 6\n");
        printf("Expected:(null)\n");
        printf("Actual  :%s\n", my_strstr(haystack, needle));
        printf("\n");
    }
}