#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) 
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else 
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    printf("Inserted %d at the beginning\n", data);
}

void insertAtEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else
    {
        struct Node* temp = *head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Inserted %d at the end\n", data);
}

void deleteNode(struct Node** head, int data) 
{
    if (*head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;

    while (temp != NULL && temp->data != data) 
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) 
    {
        printf("Element %d not found in the list\n", data);
        return;
    }

    if (prev == NULL) 
    {
        *head = temp->next;
        if (*head != NULL) 
        {
            (*head)->prev = NULL;
        }
    } 
    else 
    {
        prev->next = temp->next;
        if (temp->next != NULL) 
        {
            temp->next->prev = prev;
        }
    }
    free(temp);
    printf("Deleted %d from the list\n", data);
}

void printList(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void printListReverse(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    printf("Reverse: ");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void freeList(struct Node* head) 
{
    struct Node* temp;
    while (head != NULL) 
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() 
{
    struct Node* head = NULL;
    int choice, data;

    do 
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete a node\n");
        printf("4. Print forward\n");
        printf("5. Print reverse\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 4:
                printf("Doubly linked list:\n");
                printList(head);
                break;
            case 5:
                printf("Doubly linked list in reverse:\n");
                printListReverse(head);
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } 
    while (choice != 6);
    freeList(head);

    return 0;
}
