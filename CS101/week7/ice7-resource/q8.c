#include <stdio.h>
#include <string.h>
void reverse(char string[]) {
    int length = strlen(string);
    int j = 0;
    int i = length - 1;
    char temp = 'a';
    while (j <= i) {
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
        j++;
        i--;
    }
}

int main(void) {
    {
        printf("Test 1\n");
        char word[] = "apple";
        reverse(word);
        printf("Expected:elppa\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 2\n");
        char word[] = "pear";
        reverse(word);
        printf("Expected:raep\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 3\n");
        char word[] = "a";
        reverse(word);
        printf("Expected:a\n");
        printf("Actual  :%s\n", word);
        printf("\n");
    }

    {
        printf("Test 4\n");
        char word[] = "";
        reverse(word);
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", word);
        printf("\n");
    }
}
