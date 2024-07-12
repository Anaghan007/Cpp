#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void display();    
void main ()  
{  
    int choice =0;  
    while(choice != 3)    
    {   
        printf("\nChoose one option...");  
        // printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Show\n3.Exit\n");  
        printf("\nEnter your choice :-");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();
            break;  
            case 2:  
            display();      
            break;  
            case 3:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("Enter value :-");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("Node inserted\n");  
    }  
      
}  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("printing values :-");   
        while (ptr!=NULL)  
        {  
            printf("%d\t",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}  