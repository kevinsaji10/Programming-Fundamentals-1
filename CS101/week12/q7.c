#include <stdio.h>
#include <string.h>
void print_dancing_string(char sentence[], char start) {
    int length = strlen(sentence);
    if (start == 'T') {
        for (int i = 0; i < 3; i++) {
            printf("|");
            for (int j = 0; j < length; j++) {
                if ((i == 0 && j % 4 == 0) || (i == 1 && j % 2 != 0) || (i == 2 && j % 2 == 0 && j % 4 != 0)) {
                    printf("%c", sentence[j]);
                } else {
                    printf(" ");
                }
            }
            printf("|\n");
        }
    } else if (start == 'B') {
        for (int i = 0; i < 3; i++) {
            printf("|");
            for (int j = 0; j < length; j++) {
                if ((i == 2 && j % 4 == 0) || (i == 1 && j % 2 != 0) || (i == 0 && j % 2 == 0 && j % 4 != 0)) {
                    printf("%c", sentence[j]);
                } else {
                    printf(" ");
                }
            }
            printf("|\n");
        }

    } else {
        for (int i = 0; i < 3; i++) {
            printf("|");
            for (int j = 0; j < length; j++) {
                if ((i == 2 && (j + 1) % 4 == 0 && j != 0) || (i == 1 && j % 2 == 0) || (i == 0 && (j + 1) % 2 == 0 && (j + 1) % 4 != 0 && j != 0)) {
                    printf("%c", sentence[j]);
                } else {
                    printf(" ");
                }
            }
            printf("|\n");
        }
    }
}
int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:\n");
        printf("|a|\n");
        printf("| |\n");
        printf("| |\n");
        printf("Actual  :\n");
        print_dancing_string("a", 'T');
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:\n");
        printf("|a   e   i|\n");
        printf("| b d f h |\n");
        printf("|  c   g  |\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'T');
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:\n");
        printf("| b   f   |\n");
        printf("|a c e g i|\n");
        printf("|   d   h |\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'M');
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:\n");
        printf("|  c   g  |\n");
        printf("| b d f h |\n");
        printf("|a   e   i|\n");
        printf("Actual  :\n");
        print_dancing_string("abcdefghi", 'B');
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:\n");
        printf("||\n");
        printf("||\n");
        printf("||\n");
        printf("Actual  :\n");
        print_dancing_string("", 'M');
        printf("\n");
    }
}

// void print_line(int start, int step, char sentence[], int first_space) {
//     int length = strlen(sentence);
//     if (length == 1) {
//         printf("|%c|\n", *sentence)
//         ;
//         return;
//     }
//     if (*sentence == '\0') {
//         printf("||\n");
//         return;
//     }
//     printf("|");
//     int count = 0;
//     for (int i = 0; i< first_space; i++) {
//         printf(" ");
//         count++;
//     }
//     for (int i = start; i < length; i = i + step + 1) {
//         printf("%c", sentence[i]);
//         count++;
//         if (i < length - 1 - step)
//             for (int j = 0; j < step; j++) {
//                 printf(" ");
//                 count++;
//             }
//     }
//     for (int i = count; i< length; i++) {
//         printf(" ");
//     }
//     printf("|");
//     printf("\n");
// }
// void top (char sentence[]) {
//     print_line(0, 3, sentence, 0);
//     print_line(1, 1, sentence, 1);
//     print_line(2, 3, sentence, 2);
// }
// void middle(char sentence[])  {
//     print_line(1, 3, sentence, 1);
//     print_line(0, 1, sentence, 0);
//     print_line(3, 3, sentence, 3);
// }
// void bottom(char sentence[]) {
//     print_line(2, 3, sentence, 2);
//     print_line(1, 1, sentence, 1);
//     print_line(0, 3, sentence, 0);
// }

// void print_dancing_string(char *sentence, char start) {
//     if (start == 'T') {
//         top(sentence);
//     } else if (start == 'B') {
//         bottom(sentence);
//     } else  {
//         middle(sentence);
//     }
// }