#include <stdio.h>
#include <string.h>
// helper function to find the start index of each word in the sentence array. takes in the end index and the sentence array as parameters
int word(int end_index, char sentence[]) {
    int pointer = end_index;
    while (sentence[pointer] != ' ') {
        pointer--;
        // for the last word there is no space before it, so if pointer reaches 0 it means it is the start index of last word
        if (pointer < 0) {
            return 0;
        }
    }
    // pointer is currently at the space, so return pointer +1 to get the start index of the word
    return pointer + 1;
}
void reverse_words(char sentence[]) {
    if (strlen(sentence) > 1) {
        int length = strlen(sentence);
        // array to hold the reversed sentence
        char reversed[length];
        int end_index = length - 1;
        // r index tracks the index in the reversed array from index 0 to the end of array
        int r_index = 0;
        while (r_index < length) {
            int start_index = word(end_index, sentence);
            // create a pointer variable that increases in the for loop below for the sentence array
            int pointer = start_index;
            // word len is the length of the word
            int word_len = end_index - start_index;
            // count variable that counts the number of iterations to add with r index after exiting for loop
            int count = 0;
            for (int i = r_index; i <= r_index + word_len; i++) {
                reversed[i] = sentence[pointer];
                pointer++;
                count++;
            }
            // new r index
            r_index += count;
            // if it is not the last word yet, need to add space after the word in the reversed array
            if (r_index < length) {
                reversed[r_index] = ' ';
                r_index++;
                // it is a minus 2 to skip the space in the sentence array
                end_index = start_index - 2;
            }
        }
        // change the sentence array to the reversed array
        for (int i = 0; i < length; i++) {
            sentence[i] = reversed[i];
        }
    }
}

int main(void) {
    {
        printf("Test 1\n");
        char sentence[] = "apple and orange";
        reverse_words(sentence);
        printf("Expected:orange and apple\n");
        printf("Actual  :%s\n", sentence);
        printf("\n");
    }

    {
        printf("Test 2\n");
        char sentence[] = "I sell seashell by the seashore";
        reverse_words(sentence);
        printf("Expected:seashore the by seashell sell I\n");
        printf("Actual  :%s\n", sentence);
        printf("\n");
    }

    {
        printf("Test 3\n");
        char sentence[] = "I";
        reverse_words(sentence);
        printf("Expected:I\n");
        printf("Actual  :%s\n", sentence);
        printf("\n");
    }

    {
        printf("Test 4\n");
        char sentence[] = "";
        reverse_words(sentence);
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", sentence);
        printf("\n");
    }
}
