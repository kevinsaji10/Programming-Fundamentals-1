
/*
   Name :
   Email:
 */

# include <stdio.h>


int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:1\n");
        int worth[1] = {1};
        printf("Actual  :%d\n", steal(worth, 1));
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:5\n");
        int worth[2] = {1, 5};
        printf("Actual  :%d\n", steal(worth, 2));
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:5\n");
        int worth[3] = {1, 5, 3};
        printf("Actual  :%d\n", steal(worth, 3));
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:15\n");
        int worth[4] = {1, 5, 3, 10};
        printf("Actual  :%d\n", steal(worth, 4));
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:35\n");
        int worth[5] = {1, 5, 3, 10, 30};
        printf("Actual  :%d\n", steal(worth, 5));
        printf("\n");
    }
}