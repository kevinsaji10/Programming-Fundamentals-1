#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;
// addition function
node *add(node *ptr, int value) {
    // create memory for new node
    node *new = malloc(1 * sizeof(node));
    // assign value to new node
    new->value = value;
    // if you are creating a new linked list (there is no existing head node)
    if (ptr == NULL) {
        new->next = ptr;
        return new;
        // if head node exists
    } else {
        // while loop to find the last node
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        // assign the next of the current last node to the new node
        ptr->next = new;
        // assign the next of the new node to NULL (makes the new node the last node)
        new->next = NULL;
        // return new node (the returned value is only used if you just created a new linked list AKA the returned node is the head node)
        //(see test cases)
        return new;
    }
}
// size function (number of nodes)
int size(node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
// print function
void print(node *ptr) {
    while ((ptr) != NULL) {
        printf("%d -> ", (*ptr).value);
        ptr = ptr->next;
    }
    
    printf("NULL\n");
}
// function to free memory
void free_linked_list(node *ptr) {
    node *temp;
    while (ptr != NULL) {
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}

int main(void) {
    {
        node *head = NULL;
        head = add(head, 3);
        add(head, 4);
        add(head, 5);
        printf("Expected:3 -> 4 -> 5 -> NULL\n");
        printf("Actual  :");
        print(head);
        printf("Expected(size):3\n");
        printf("Actual  (size):%d\n", size(head));
        free_linked_list(head); // no test for free_linked_list
    }
}