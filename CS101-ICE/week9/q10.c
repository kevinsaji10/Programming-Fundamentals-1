#include <stdio.h>
#include <string.h>
void run_length_encode(char* input, char output[]) {
    char *ptr = output;
    int n = 0;
    while (*input != '\0') {
        char current = *input;
        int count = 0;
        while (*input == current) {
           count++;
           input++;
        }
        n = sprintf(ptr, "%c%d", current, count);
        ptr+= n;
        
    }
}

int main(void) {
    {
        printf("Test 1\n");
        char *input = "aaaaaaaaaabbbaxxxxyyyzyx";
        char output[25] = {0};
        run_length_encode(input, output);
        printf("Expected:a10b3a1x4y3z1y1x1\n");
        printf("Actual  :%s\n", output);
    }

    {
        printf("Test 2\n");
        char *input = "";
        char output[25] = {0};
        run_length_encode(input, output);
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", output);
    }
}