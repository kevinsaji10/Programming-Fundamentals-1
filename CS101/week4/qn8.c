#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ans;
    int random_num;
    int guess;
    int counter;
    do {

        counter = 1;
        random_num = rand() % 100 + 1;
        printf("Enter your guess(1 to 100): ");
        scanf("%d", &guess);
        while (guess != random_num) {
            if (guess < random_num) {
                printf("Low! Try Again\n");
            } else {
                printf("High! Try again\n");
            }
            counter++;
            printf("Enter your guess(1 to 100): ");
            scanf("%d", &guess);
        }
        printf("Congrats!\n");
        printf("You guessed in %d attempts\n", counter);

        printf("Do you want to play again?(Y/y/N/n) ");
        scanf(" %c", &ans);
    } while (ans == 'y' || ans == 'Y');
    printf("Bye!\n");
}