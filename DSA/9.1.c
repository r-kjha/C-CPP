// //wap in c  to implement pre-order binary tree using doubly linear linked list

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *root=NULL;

// struct node *create()
// {
//     struct node *newnode;
//     newnode=(struct node *)malloc(sizeof(struct node));
//     printf("Enter data or -1 for no data\n");
//     scanf("%d",&newnode->data);
//     if(newnode->data==-1)
//     {
//         return NULL;
//     }
//     printf("Enter left child of %d\n",newnode->data);
//     newnode->left=create();
//     printf("Enter right child of %d\n",newnode->data);
//     newnode->right=create();
//     return newnode;
// }


// void preorder(struct node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     printf("%d ",root->data);
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(struct node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     printf("%d ",root->data);
//     inorder(root->right);
// }

// void postorder(struct node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     printf("%d ",root->data);
// }



// void main()
// {
//     root=create();
//     printf("Inorder traversal of binary tree is:\n");
//     preorder(root);
//     printf("\nPreorder traversal of binary tree is:\n");
//     inorder(root);
//     printf("\nPostorder traversal of binary tree is:\n");
//     postorder(root);

// }

