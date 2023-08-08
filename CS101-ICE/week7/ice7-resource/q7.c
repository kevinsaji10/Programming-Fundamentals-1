#include <stdbool.h>
#include <stdio.h>
#include <string.h>
char converter(char c) {
    if ((c >= 65 && c <= 90)) {
        c += 32;
    }
    return c;
}
bool is_char(char c) {
    if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))) {
        return true;
    } else {
        return false;
    }
}
int count_num_vowels(char string[]) {
    int count = 0;
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (is_char(string[i])) {
            converter(string[i]);
            if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    {
        printf("Test 1\n");
        int result = count_num_vowels("The brown fox jumps over the wall");
        printf("Expected:8\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 2\n");
        int result = count_num_vowels("Tht wld nt b pssbl. Nglsh wrds mst hv vwls.");
        printf("Expected:0\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }

    {
        printf("Test 3\n");
        int result = count_num_vowels("");
        printf("Expected:0\n");
        printf("Actual  :%d\n", result);
        printf("\n");
    }
}
