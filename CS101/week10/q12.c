#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void scramble_sentence(char orig[], char scrambled[]) {
    char sentence[strlen(orig)+1];
    strcpy(sentence, orig);
    char *token_ptr = strtok(sentence,  " ");
    while (token_ptr != NULL) {
        int length = strlen(token_ptr);
        if (!((token_ptr[length-1]>= 'A' && token_ptr[length-1]<= 'Z') || (token_ptr[length-1]>= 'a' && token_ptr[length-1]<= 'z'))) {
            length--;
        }
        for (int i = 1; i< length-1; i++) {
            srand(clock());
            int j = (rand() % i)+1;
            char temp = token_ptr[i];
            token_ptr[i] = token_ptr[j];
            token_ptr[j] = temp;
        }
        int length1 = strlen(token_ptr);
        for (int i = 0; i< length1; i++) {
            *scrambled = token_ptr[i];
            scrambled++;
        }
        *scrambled = ' ';
        scrambled++;
        token_ptr = strtok(NULL, " ");
    }
    *scrambled = '\0';
    


}
int main(void) {
    {
        char orig[] = "This is a sentence with 7 tokens";
        char scrambled[35];
        scramble_sentence(orig, scrambled);
        printf("Test 1\n");
        printf("Original :%s\n", orig);
        printf("Scrambled:%s\n", scrambled);
        printf("\n");
    }

    {
        char orig[] = "C is peculiar in a lot of ways, but it, like many other successful things, has a certain unity of approach that stems from development in a small group.";
        char scrambled[155];
        scramble_sentence(orig, scrambled);
        printf("Test 2\n");
        printf("Original :%s\n", orig);
        printf("Scrambled:%s\n", scrambled);
    }

    // {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }

    //     {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }
    //     {char test[] = "this";
    // scramble(test);
    // printf("%s\n", test);
    // }
}


// char sentence[] = "c is so fun";
    // char *token_ptr = strtok(sentence,  " ");

    // while (token_ptr != NULL) {
    //     printf("%s\n", token_ptr);
    //     token_ptr = strtok(NULL, " ");
    // }
    // printf("Sentence: %s", sentence);


// -- To shuffle an array a of n elements (indices 0..n-1):
// for i from n−1 downto 1 do
//      j ← random integer such that 0 ≤ j ≤ i
//      exchange a[j] and a[i]