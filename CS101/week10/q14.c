#include <stdio.h>
int length(char s[]) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}
void longest_common_suffix(char s1[], char s2[], char s3[]) {
    char *ptr = s1 + length(s1) - 1;
    int s1_length = length(s1);
    int s2_length = length(s2);
    int smaller;
    if (s1_length > s2_length) {
        smaller = s2_length;
    } else {
        smaller = s1_length;
    }
    s1 = s1 + s1_length - 1;
    s2 = s2 + s2_length - 1;
    int suffix_length = 0;
    while (suffix_length < smaller && *s1 == *s2) {
        suffix_length++;
        s1--;
        s2--;
    }
    s1 = ptr - suffix_length + 1;
    for (int i = 0; i < suffix_length; i++) {
        *s3 = *s1;
        s1++;
        s3++;
    }
    *s3 = '\0';
}

int main(void) {
    {
        char *s1 = "incident";
        char *s2 = "accident";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 1\n");
        printf("Expected:cident\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "crocodile";
        char *s2 = "horse";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 2\n");
        printf("Expected:e\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "eat";
        char *s2 = "treat";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 3\n");
        printf("Expected:eat\n");
        printf("Actual  :%s\n", s3);
        printf("\n");
    }

    {
        char *s1 = "discontent";
        char *s2 = "discontinue";
        char s3[20];
        longest_common_suffix(s1, s2, s3);
        printf("Test 4\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", s3);
        printf("\n");
    }
}