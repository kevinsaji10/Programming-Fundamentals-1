#include <stdio.h>
#include <string.h>
char * get_longest_word(char * word[], int n) {
    int longest = 0;
    char* longestptr = word[0];
    for (int i = 0; i< n; i++) {
        char*ptr = word[i];
        char*ptr1 = ptr;
        int count = 0;
        while( *ptr != '\0') {
            count++;
            ptr++;
        }
        if (count > longest) {
            longest = count;
            longestptr = ptr1;
            
        }
    }
    return longestptr;
}

int main(void) {
    int tc_num = 1;
    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {"apple", "nut", "coconut"};
        printf("Expected:coconut\n");
        printf("Actual  :%s\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }

    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {"coconut"};
        printf("Expected:coconut\n");
        printf("Actual  :%s\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }

    {
        printf("Test Case %d\n", tc_num++);
        char *word[] = {""};
        printf("Expected:[]\n");
        printf("Actual  :[%s]\n", get_longest_word(word, sizeof(word)/sizeof(char *)));
        printf("\n");
    }
}