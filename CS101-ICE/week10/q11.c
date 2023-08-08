#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool letter_is_present(char target, char s1[], char s2[]) {
    int counter1 = 0;
    int counter2 = 0;
    while (*s1 != '\0') {
        if (*s1 == target) {
            counter1++;
        }
        s1++;
    }
    while (*s2 != '\0') {
        if (*s2 == target) {
            counter2++;
        }
        s2++;
    }
    if (counter1 == counter2) {
        return true;
    } else {
        return false;
    }
}
bool is_anagram(char s1[], char s2[]) {
    char *ptr1 = s1;
    char *ptr2 = s2;
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    if (length1 != length2) {
        return false;
    }
    int count = 0;
    while (*s1 != '\0') {
        if (letter_is_present((*s1), ptr1, ptr2)) {
            count++;
        }
        s1++;
    }
    if (count == length1) {
        return true;
    } else {
        return false;
    }
}
int main(void) {
    {
        printf("Test 1:%s\n", is_anagram("listen", "silent") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 2:%s\n", is_anagram("rail safety", "fairy tales") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 3:%s\n", is_anagram("restful", "fluster") ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 4:%s\n", is_anagram("restfully", "fluttering") ? "Fail" : "Pass");
        printf("\n");
    }

    {
        printf("Test 5:%s\n", is_anagram("", "") ? "Pass" : "Fail");
        printf("\n");
    }
}
