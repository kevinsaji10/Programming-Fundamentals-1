#include <stdio.h>

int main(void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int value = 0;
    int array[5];

    

    for (int i = 4; i>=0; i--) {
        array[i] = number % 10;
        value += number % 10;
        number = number / 10;
        

    }
    printf("%d + %d + %d + %d + %d = %d\n",array[0], array[1], array[2], array[3], array[4],  value);

    

}