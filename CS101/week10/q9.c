#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool is_good_password(char *password) {
    int lower = 0;
    int upper = 0;
    int number = 0;
    int count = 0;
    while (*password != '\0') {
        count++;
        if (*password >= 'a' && *password <= 'z') {
            lower++;
        } else if (*password >= 'A' && *password <= 'Z') {
            upper++;
        } else if (*password >= '0' && *password <= '9') {
            number++;
        }
        password++;
    }
    if ((count >= 6 && count <= 20) && (lower != 0 && upper != 0 && number != 0)) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    {
        char *password = "abc";
        printf("Test 1:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "Abcdefghijklmnopqrst1234";
        printf("Test 2:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcdefgh";
        printf("Test 3:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "Abcdefgh";
        printf("Test 4:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "ABCD1234";
        printf("Test 5:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcd1234";
        printf("Test 6:%s\n", is_good_password(password) ? "Fail" : "Pass");
        printf("\n");
    }

    {
        char *password = "abcd123A";
        printf("Test 7:%s\n", is_good_password(password) ? "Pass" : "Fail");
        printf("\n");
    }
}
