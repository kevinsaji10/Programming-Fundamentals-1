/*
   Name :
   Email:
 */

#include <stdbool.h>
#include <stdio.h>
void print_snake(char start, char end, int len, int width) {
    char arr[len];
    int index = len-1;
    char character = start;
    while(index >=0) {
        arr[index] = character;
        index--;
        character++;
        if (character > end) {
            character = start;
        }
    }
    for (int i = 0; i< len; i++) {
        printf("%c\n", arr[i]);
    }
    index = 0;
    int row = 4;
    while(index < len) {
        for (int k = 0; k < row; k++)
            if (k == 0) {
                for (int i = 0; i< width; i++) {
                    if (i <= width-2) {
                        printf("*");
                    } else {
                        printf("%c\n", arr[index]);
                        index++;
                    }
                }
            } else if (k == 1) {
                for (int i = width -1; i>=0; i++) {
                    printf("%c", arr[index+i]);
                }
                index = index + width;
                printf("\n");
            } else if (k == 2) {
                printf("%c\n",arr[index]);
                index++;
            } else {
                for (int i = 0; i< width;i++) {
                    printf("%c", arr[index]);
                    index++;
                }
                printf("\n");
            }
    }
    
}
int main(void) {
    {
        printf("=== Test 1 ===\n");
        printf("Expected:\n");
        printf("  LK\n");
        printf("   J\n");
        printf("FGHI\n");
        printf("E   \n");
        printf("DCBA\n");
        printf("\n");
        printf("Actual:\n");
        print_snake('A', 'L', 8, 4);
        printf("--------------------------------\n");
    }

    // {
    //     printf("=== Test 2 ===\n");
    //     printf("Expected:\n");
    //     printf("C  \n");
    //     printf("BAC\n");
    //     printf("  B\n");
    //     printf("BCA\n");
    //     printf("A  \n");
    //     printf("CBA\n");
    //     printf("\n");
    //     printf("Actual:\n");
    //     print_snake('A', 'C', 12, 3);
    //     printf("--------------------------------\n");
    // }

    // {
    //     printf("=== Test 3 ===\n");
    //     printf("Expected:\n");
    //     printf("    B\n");
    //     printf("ABYZA\n");
    //     printf("Z\n");
    //     printf("YBAZY\n");
    //     printf("\n");
    //     printf("Actual:\n");
    //     print_snake('Y', 'B', 12, 5);
    //     printf("--------------------------------\n");
    // }

    // {
    //     printf("=== Test 4 ===\n");
    //     printf("Expected:\n");
    //     printf("   L\n");
    //     printf("   K\n");
    //     printf("GHIJ\n");
    //     printf("F\n");
    //     printf("EDCB\n");
    //     printf("\n");
    //     printf("Actual:\n");
    //     print_snake('B', 'M', 11, 4);
    //     printf("--------------------------------\n");
    // }

    // {
    //     printf("=== Test 5 ===\n");
    //     printf("Expected:\n");
    //     printf(" I\n");
    //     printf("GH\n");
    //     printf("F\n");
    //     printf("ED\n");
    //     printf(" C\n");
    //     printf("AB\n");
    //     printf("Z\n");
    //     printf("YX\n");
    //     printf("\n");
    //     printf("Actual:\n");
    //     print_snake('X', 'W', 12, 2);
    //     printf("--------------------------------\n");
    // }
}