//wap with algorithm to insert at beginning,end, at specific position in doubly linear linked list

/* Algorithm for insertion at beginning
    1. Start
    2. If head is NULL
        2.1 Allocate memory for new node
        2.2 Assign data to new node
        2.3 Make next of new node as head and previous as NULL
        2.4 Make new node as head
        2.5 Return
    3. Else
        3.1 Allocate memory for new node
        3.2 Assign data to new node
        3.3 Make next of new node as head and previous as NULL
        3.4 Make new node as head
        3.5 Return
    4. Stop
*/

/* Algorithm for insertion at end
    1. Start
    2. If head is NULL
        2.1 Allocate memory for new node
        2.2 Assign data to new node
        2.3 Make next of new node as head and previous as NULL
        2.4 Make new node as head
        2.5 Return
    3. Else
        3.1 Allocate memory for new node
        3.2 Assign data to new node
        3.3 Make next of new node as head and previous as NULL
        3.4 Make new node as head
        3.5 Return
    4. Stop
*/


/* Algorithm for insertion at specific position
    1. Start
    2. If head is NULL
        2.1 Allocate memory for new node
        2.2 Assign data to new node
        2.3 Make next of new node as head and previous as NULL
        2.4 Make new node as head
        2.5 Return
    3. Else
        3.1 Allocate memory for new node
        3.2 Assign data to new node
        3.3 Make next of new node as head and previous as NULL
        3.4 Make new node as head
        3.5 Return
    4. Stop
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertAtBeginning(){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd(){
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtSpecificPosition(){
    struct node *newNode, *temp;
    int pos, i;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(pos == 1  || head == NULL){
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    else{
        temp = head;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }

        // for(i = 1; i < pos - 1; i++){
        //     temp = temp->next;

        // }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void display(){
    struct node *temp;
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

void main(){
    int ch;
    while(1){
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at specific position\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: insertAtBeginning();
                    break;
            case 2: insertAtEnd();
                    break;
            case 3: insertAtSpecificPosition();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
