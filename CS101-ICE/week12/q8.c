#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_checker(char sentence[], char target) {
    int count = 0;
    for  (int i = 0; i< strlen(sentence); i++) {
        if (sentence[i] == target - 32 || sentence[i] == target) {
            count++;
        }
    }
    return count;
}
char get_highest_occurring_character(char sentence[]) {
    if (*sentence == '\0') {
        return '\0';
    }
    int highest_count = 0;
    char highest = 'a';
    for (int i = 'a'; i<'z'+1; i++) {
        if (count_checker(sentence, i) >highest_count) {
            highest_count = count_checker(sentence, i);
            highest = i;
        }
    }
    return highest;

}

int main(void) {
    int tc_num  = 1;
    {
        char result = get_highest_occurring_character("abbba");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:b\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    {
        char result = get_highest_occurring_character("Apple ACE Car code coke");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:c\n");
        printf("Actual  :%c\n", result);
        printf("\n");
    }

    {
        char result = get_highest_occurring_character("");
        printf("Test Case %d\n", tc_num++);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result == '\0' ? "True" : "False");
        printf("\n");
    }
}