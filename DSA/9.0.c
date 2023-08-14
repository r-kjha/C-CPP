//wap in c  to implement binary tree using doubly linear linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

struct node *create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data or -1 for no data\n");
    scanf("%d",&newnode->data);
    if(newnode->data==-1)
    {
        return NULL;
    }
    printf("Enter left child of %d\n",newnode->data);
    newnode->left=create();
    printf("Enter right child of %d\n",newnode->data);
    newnode->right=create();
    return newnode;
}

void main()
{
    root=create();
}

