# include<stdio.h>
# define Size 5
int deque_arr[Size];
int front = -1;
int rear = -1;
 
void insert_rear()
{
    int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   printf("Queue Overflow\n");
        return;
    }
    if (front == -1)  
    {   front = 0;
        rear = 0;
    }
    else
    if(rear == Size-1) 
        rear = 0;
    else
        rear = rear+1;
         
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[rear] = added_item ;
}
void insert_front()
{   
    int added_item;
    if((front == 0 && rear == Size-1) || (front == rear+1))
    {   
        printf("Queue Overflow \n");
        return;  
    }
    if (front == -1)
    {   
        front = 0;
        rear = 0;    
    }
    else
    if(front== 0)
        front=Size-1;
    else
        front=front-1;
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[front] = added_item ;  
}
void delete_front()
{   
    if (front == -1)
    {   
        printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n",deque_arr[front]);
    if(front == rear) 
    {   
        front = -1;
        rear=-1;
    }
    else
        if(front == Size-1)
            front = 0;
        else
            front = front+1;
}
void delete_rear()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n",deque_arr[rear]);
    if(front == rear) 
    {
        front = -1;
        rear=-1;
    }
    else
        if(rear == 0)
            rear=Size-1;
        else
            rear=rear-1;    
}
void display_queue()
{   
    int front_pos = front,rear_pos = rear;
     
    if(front == -1)
    {   
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    {   
        while(front_pos <= rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= Size-1)
        {   
            printf("%d ",deque_arr[front_pos]);
            front_pos++;    
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {   
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{   
     int choice;
    do
    {   
        printf("\n1.Insert at front\n");
        printf("2.Insert at rear\n");
        printf("3.Delete from front\n");
        printf("4.Delete from rear\n");
        printf("5.Display\n");
        printf("6.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
 
        switch(choice)
        {   
            case 1:
            insert_front();
            break;
            case 2:
            insert_rear();
            break;
         case 3:
            delete_front();
            break;
         case 4:
            delete_rear();
            break;
         case 5:
            display_queue();
            break;
         case 6:
            break;
         default:
            printf("Wrong choice\n");
        }
    }
    while(choice!=6);
}