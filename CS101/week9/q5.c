#include <stdio.h>
void my_strcat(char dest[], char src[]) {
    int count = 0;
    while(*dest != '\0') {
        count++;
        dest++;
    }
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
        count++;
    }
}


int main(void) {
    {
        char dest[10] = "pear";
        char src[5] = "kiwi";
        my_strcat(dest, src);
        printf("Test 1\n");
        printf("Expected:pearkiwi\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char dest[10] = "";
        char src[5] = "kiwi";
        my_strcat(dest, src);
        printf("Test 2\n");
        printf("Expected:kiwi\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char dest[10] = "kiwi";
        char src[5] = "";
        my_strcat(dest, src);
        printf("Test 3\n");
        printf("Expected:kiwi\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char dest[10] = "";
        char src[5] = "";
        my_strcat(dest, src);
        printf("Test 4\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", dest);
        printf("\n");
    }
}