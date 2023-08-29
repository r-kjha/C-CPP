//WAP in C to implement various operations in Singly Linear Linked List.

#include<stdio.h>
#include<stdlib.h>

struct node // structure of a node
{
    int data;
    struct node *next;
};

struct node *head = NULL; //initializing the list with NULL - empty list

//Insert at Beg

void insert_beg(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

//Insert at End

void insert_end()
{
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

//Insert at Pos

void insert_pos(){
    int x, pos, i;
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        printf("Enter the position: ");
        scanf("%d", &pos);
        temp = head;
        for(i=1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

//Delete at Beg

void delete_beg()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        printf("Deleted element is %d", temp->data);
        head = head->next;
        free(temp);
    }
}

//Delete at End

void delete_end()
{
    struct node *temp, *prevnode;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        if(temp == head)
        {
            head = NULL;
        }
        else
        {
            printf("Deleted element is %d", temp->data);
            prevnode->next = NULL;
        }
        free(temp);
    }
}

//Delete at Pos

void delete_pos()
{
    int pos, i;
    struct node *temp, *prevnode;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter the position: ");
        scanf("%d", &pos);
        temp = head;
        for(i=1; i<pos; i++)
        {
            prevnode = temp;
            temp = temp->next;
        }
        printf("Deleted element is %d", temp->data);
        prevnode->next = temp->next;
        free(temp);
    }
}

//Display

void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}


// main

int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert_beg();
                    break;
            case 2: insert_end();
                    break;
            case 3: insert_pos();
                    break;
            case 4: delete_beg();
                    break;
            case 5: delete_end();
                    break;
            case 6: delete_pos();
                    break;
            case 7: display();
                    break;
            case 8: exit(0);
                    break;
            default: printf("Invalid choice");
        }
    }
    return 0;
}
