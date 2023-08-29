//wap in c to implement various operations on a circular singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

// insert at beginning

void insert_beg(){
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;
        while (temp->next != start)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = start;
        start = newnode;
    }
}

//insertion at end

void insert_end(){
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;
        while (temp->next != start)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = start;
    }
}

//insertion at a given position

void insert_pos(){
    struct node *newnode, *temp;
    int pos, i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    printf("Enter the position:");
    scanf("%d", &pos);
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

//deletion at beginning

void delete_beg(){
    struct node *temp;
    if (start == NULL)
        printf("List is empty\n");
    else if (start->next == start)
    {
        printf("The deleted element is %d\n", start->data);
        start = NULL;
    }
    else
    {
        temp = start;
        while (temp->next != start)
            temp = temp->next;
        temp->next = start->next;
        printf("The deleted element is %d\n", start->data);
        free(start);
        start = temp->next;
    }
}

//deletion at end

void delete_end(){
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("List is empty\n");
    else if (start->next == start)
    {
        printf("The deleted element is %d\n", start->data);
        start = NULL;
    }
    else
    {
        temp = start;
        while (temp->next != start)
        {
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = start;
        printf("The deleted element is %d\n", temp->data);
        free(temp);
    }
}

//deletion at a given position

void delete_pos(){
    struct node *temp, *prevnode;
    int pos, i = 1;
    printf("Enter the position:");
    scanf("%d", &pos);
    if (start == NULL)
        printf("List is empty\n");
    else if (start->next == start)
    {
        printf("The deleted element is %d\n", start->data);
        start = NULL;
    }
    else
    {
        temp = start;
        while (i < pos)
        {
            prevnode = temp;
            temp = temp->next;
            i++;
        }
        prevnode->next = temp->next;
        printf("The deleted element is %d\n", temp->data);
        free(temp);
    }
}

//display

void display(){
    struct node *temp;
    if (start == NULL)
        printf("List is empty\n");
    else
    {
        temp = start;
        while (temp->next != start)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

//main

void main(){
    int ch;
    while (1)
    {
        printf("1.Insert at beginning\n");
        printf("2.Insert at end\n");
        printf("3.Insert at a given position\n");
        printf("4.Delete from beginning\n");
        printf("5.Delete from end\n");
        printf("6.Delete from a given position\n");
        printf("7.Display\n");
        printf("8.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            delete_beg();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_pos();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}



