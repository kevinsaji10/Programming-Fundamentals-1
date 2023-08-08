#include <stdio.h>
void encode(char *plaintext, char ciphertext[], int change) {
    while (*plaintext != '\0') {
        int current = *plaintext;
        if (current >= 'a' && current <= 'z') {
            current += change;
            if (current > 'z') {
                current = 'a' + (current - 'z' - 1);
            }
        } else if (current >= 'A' && current <= 'Z') {
            current += change;
            if (current > 'Z') {
                current = 'A' + (current - 'Z' - 1);
            }
        }
        *ciphertext = (char)current;
        ciphertext++;
        plaintext++;
    }
}

void decode(char plaintext[], char *ciphertext, int change) {
    while (*ciphertext != '\0') {
        int current = *ciphertext;
        if (current >= 'a' && current <= 'z') {
            current -= change;
            if (current < 'a') {
                current = 'z' - (('a' - current) - 1);
            }
        } else if (current >= 'A' && current <= 'Z') {
            current -= change;
            if (current < 'A') {
                current = 'Z' - (('A' - current) - 1);
            }
        }
        *plaintext = (char)current;
        ciphertext++;
        plaintext++;
    }
}
int main(void) {
    {
        char *plaintext = "abc";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 1);
        printf("Test 1\n");
        printf("Expected:bcd\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "abc";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 27);
        printf("Test 2\n");
        printf("Expected:bcd\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "apples and oranges. Which do you prefer?";
        char ciphertext[45] = {0};
        encode(plaintext, ciphertext, 13);
        printf("Test 3\n");
        printf("Expected:nccyrf naq benatrf. Juvpu qb lbh cersre?\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    {
        char *plaintext = "###";
        char ciphertext[4] = {0};
        encode(plaintext, ciphertext, 13);
        printf("Test 4\n");
        printf("Expected:###\n");
        printf("Actual  :%s\n", ciphertext);
        printf("\n");
    }

    // ------
    {
        char *ciphertext = "bcd";
        char plaintext[4] = {0};
        decode(plaintext, ciphertext, 1);
        printf("Test 5\n");
        printf("Expected:abc\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "bcd";
        char plaintext[4] = {0};
        decode(plaintext, ciphertext, 27);
        printf("Test 6\n");
        printf("Expected:abc\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "P gur yvtug ng gur raq bs gur ghaary";
        char plaintext[40] = {0};
        decode(plaintext, ciphertext, 13);
        printf("Test 7\n");
        printf("Expected:C the light at the end of the tunnel\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }

    {
        char *ciphertext = "abc 123";
        char plaintext[40] = {0};
        decode(plaintext, ciphertext, 26);
        printf("Test 7\n");
        printf("Expected:abc 123\n");
        printf("Actual  :%s\n", plaintext);
        printf("\n");
    }
}