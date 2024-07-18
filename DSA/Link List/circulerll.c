#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = newNode; 
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        while (temp->next != *head) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
        *head = newNode;
    }
}
void display(struct Node* head) 
{
    struct Node* temp = head;

    if (head != NULL) 
    {
        do 
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } 
        while (temp != head);
        printf("(Head)\n");
    }
}

int main() 
{
    struct Node* head = NULL;
    int choice, value;

    do 
    {
        printf("\nMenu:\n");
        printf("1. Insert a value\n");
        printf("2. Display the circular linked list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                printf("Value %d inserted into the circular linked list.\n", value);
                break;
            case 2:
                printf("Circular Linked List: ");
                display(head);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid choice.\n");
        }
    } 
    while (choice != 3);
    return 0;
}