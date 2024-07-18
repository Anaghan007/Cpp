#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b;

    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 97;
    b.ch = 'a';
    b.ptr = NULL;

    a.ptr = &b;
    b.ptr = &a;
    printf("Value of A is:\nData: %d,Char: %c\n",b.ptr->data,b.ptr->ch);
    printf("\nValue of B is:\nData: %d,Char: %c\n",a.ptr->data,a.ptr->ch);
}