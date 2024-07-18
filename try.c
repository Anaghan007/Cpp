#include <stdio.h>
int num;
int num2;
int num3;
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
    printf("Enter Date Of Birth : ");
    scanf("%d",&num);
    printf("Enter Month Of Birth : ");
    scanf("%d",&num2);
    printf("Enter  Year Of Birth : ");
    scanf("%d",&num3);
}
void showdata()
{
    printf("Your Name : %s\n",name2);
    printf("Your Surname : %s\n",name1);
    printf("Your DOB : %d-%d-%d\n",num,num2,num3);
}