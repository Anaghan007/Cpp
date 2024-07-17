#include <stdio.h>
    int num;
char name2[20];
char name1[20];
int choice;
void name();
void surname();
void dob();
void showdata();
void main() 
{
    int exit;
    do
    {
        printf("\n1. Enter Name");
        printf("\n2. Enter Surname");
        printf("\n3. Enter DOB\n");
        printf("4. Show Data\n");
        printf("5. Exit");
        printf("\nEnter your choice : ");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            name();      
            break;
            case 2:  
            surname();         
            break;  
            case 3:  
            dob();       
            break;  
            case 4:
            showdata();
            break;  
            case 5:
            exit;
            break;
            default:
            printf("Please enter valid choice..");  
        }    
    }
    while (choice !=5);
}

void name()
{
    printf("Enter Name : ");
    scanf("%s",&name2);
}
void surname()
{
    printf("Enter Surname : ");
    scanf("%s",&name1);
}
void dob()
{
    printf("Enter DOB : ");
    scanf("%d",&num);
}
void showdata()
{
    printf("Your Name : %s",name2);
    printf("Your Surname : %s",name1);
    printf("Your DOB : %d",num);
}