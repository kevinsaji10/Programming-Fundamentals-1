#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

int size(node *head) {
    if (head == NULL) {
        return 0;
    }
    int count = 1;
    while ((*head).next != NULL) {
        head = (*head).next;
        count++;
    }
    return count;
}
int get_middle(node *head) {
    if (head == NULL) {
        return -1;
    }
    int mid_index = (size(head) / 2) + 1 - 1;
    // number of iterations is 1 less than mid index
    for (int i = 0; i < mid_index; i++) {
        head = (*head).next;
    }
    return (*head).value;
}
int main(void) {
    {
        // creates a linked list with 8 nodes
        // 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> 0
        node *prev = malloc(sizeof(node));
        prev->value = 0;
        prev->next = NULL;

        for (int i = 1; i < 8; i++) {
            node *current = malloc(sizeof(node));
            current->value = i;
            current->next = prev;
            prev = current;
        }

        printf("Test 1\n");
        printf("Expected:3\n");
        printf("Actual  :%d\n", get_middle(prev));
        printf("\n");
    }

    {
        node last = {5, NULL};
        node second = {7, &last};
        node head = {3, &second};
        printf("Test 2\n");
        printf("Expected:7\n");
        printf("Actual  :%d\n", get_middle(&head));
        printf("\n");
    }

    {
        node last = {2, NULL};
        node head = {3, &last};
        printf("Test 3\n");
        printf("Expected:2\n");
        printf("Actual  :%d\n", get_middle(&head));

        printf("\n");
    }

    {
        node head = {3, NULL};
        printf("Test 4\n");
        printf("Expected:3\n");
        printf("Actual  :%d\n", get_middle(&head));

        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:-1\n");
        printf("Actual  :%d\n", get_middle(NULL));
        printf("\n");
    }
}