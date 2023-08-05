//binary tree implementation in c

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(){
    int x;
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Node data: ");
    scanf("%d", &x);
    if (x == -1){
        return 0;
    }

    newNode->data = x;
    printf("Enter left child of %d\n", x);
    newNode->left = createNode();
    printf("Enter right child of %d\n", x);
    newNode->right = createNode();
    return newNode;
}

int main(){
    struct node *root;
    root=0;
    root = createNode();
    return 0;
}