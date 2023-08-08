#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool email_valid (char email[]) {
    // if the dot or @ is at the start or end of the email
    if (email[0] == '@' || email[0] == '.' || email[strlen(email)-1] == '@' || email[strlen(email)-1] == '.') {
        return false;
    }
    int dot_index = 0;
    int at_index = 0;
    // if the dot comes before the @ email
    for (int i = strlen(email)-1; i>=0 ; i--) {
        if (email[i] == '.'){
            dot_index = i;
        } if (email[i] == '@') {
            at_index = i;
        }
    }
    if ((dot_index <= at_index)) {
        return false;
    }
    return true;
}
char *get_email(char str[]) {
    // total number of spaces in the array in heap
    int length = strlen(str) + 1;
    char string[length];
    strcpy(string, str);
    /* get the first token */
    char *token = strtok(string, " ");
    /* walk through other tokens */
    while (token != NULL) {
        if (strchr(token, '@') != NULL) {
            break;
        }
        token = strtok(NULL, " ");
    }
    char *result = calloc(strlen(token) + 1, sizeof(char));
    if (email_valid(token)) {
        strcpy(result, token);
        return result;
    } else {
        printf("nah\n");
        return result;
    }
}

int main(void) {
    {
        char *result = get_email("my email is apple@gmail.com do keep in touch");
        printf("Expected:[apple@gmail.com]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_email("apple@gmail.com is my email");
        printf("Expected:[apple@gmail.com]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }

    {
        char *result = get_email("My email is orange@smu.edu.sg");
        printf("Expected:[orange@smu.edu.sg]\n");
        printf("Actual  :[%s]\n", result);
        free(result);
        printf("\n");
    }
}

//    const char s[2] = " ";
//    char *token;

//    /* get the first token */
//    token = strtok(str, s);

//    /* walk through other tokens */
//    while( token != NULL ) {
//       printf( " %s\n", token );

//       token = strtok(NULL, s);
//    }

// }
// char *result = calloc(strlen(token)+1, sizeof(char));
// result
// char *target_ptr = strchr(sentence, '@');
// printf("%s\n", target_ptr);
// char* back_ptr = NULL;
// char* front_ptr = NULL;
// char* ptr = target_ptr;
// while (*ptr != ' ' && *ptr != sentence[1]) {
//     ptr--;
// }
// ptr++;
// front_ptr = ptr;
// ptr = target_ptr;
// while(*ptr != '\0'&& *ptr != ' ' ) {
//     ptr++;
// }
// ptr--;
// back_ptr = ptr;
// printf("%c\n", *front_ptr);
// printf("%c\n", *back_ptr);
// int length  = back_ptr - front_ptr +1;
// char * result = calloc(length+1, sizeof(char));
// for (int i = 0; i< length+1; i++) {
//     result[i] = *front_ptr;
//     front_ptr++;
// }
// result[length] = '\0';
// return result;