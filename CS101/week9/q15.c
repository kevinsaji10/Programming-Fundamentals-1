#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int converter(char number) {
    return number - 48;
}
bool verify(char *card) {
    if (strlen(card) != 16) {
        return false;
    }
    int value = 0;
    while(*card != '\0') {
        int digit = converter(*card);
        if (digit *2 >= 10) {
            value += digit*2 -9;
        } else {
            value += digit*2;
        }
        card++;

        digit = converter(*card);
        value += digit;
        card++;

    }
    if (value %10 == 0) {
        return true;
    } else {
        return false;
    }
}


int main(void) {
    {
        char *card = "2323200577663554";
        printf("Test 1\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "4041422060806790";
        printf("Test 2\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5222747000084993";
        printf("Test 3\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5256392810443201";
        printf("Test 4\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }

    {
        char *card = "5256392810443202";
        printf("Test 5\n");
        printf("Expected:false\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }
    {
        char *card = "2022";
        printf("Test 6\n");
        printf("Expected:false\n");
        printf("Actual  :%s\n", verify(card) ? "true" : "false");
        printf("\n");
    }
}