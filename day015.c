// Question 15:
// Write a program to detect a cycle in linked list.
//


#include <stdio.h>
#include <stdlib.h>

// Define a node of the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to detect cycle
int detectCycle(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    // Move slow by 1 step and fast by 2 steps
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // If both pointers meet, cycle exists
        if (slow == fast)
        {
            return 1;
        }
    }

    // If fast reaches NULL, there is no cycle
    return 0;
}

int main()
{
    // Create nodes
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    // Store data and connect nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;

    // Create a cycle: 4 -> 2
    fourth->next = second;

    // Check for cycle
    if (detectCycle(head))
        printf("Cycle detected");
    else
        printf("No cycle");

    return 0;
}