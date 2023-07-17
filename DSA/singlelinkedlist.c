/*
    LAB 7
*/


//wap in c to create and display a single linked list and ask the number of nodes to be created from the user.

/* ALGORITHM
    1. Start
    2. Declare a structure node with two members data and next.
    3. Declare two pointers head and tail of type struct node.
    4. Declare a function createNode() to create a node.
    5. Declare a function displayNode() to display the nodes of the linked list.
    6. In main function declare two variables data and n.
    7. Ask the user to enter the number of nodes to be created.
    8. Run a loop from 1 to n.
    9. Ask the user to enter the data for each node.
    10. Call the function createNode() to create a node with the given data.
    11. Call the function displayNode() to display the nodes of the linked list.
    12. Stop

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; //pointer to store the address of next node
};

struct node *head=NULL, *tail=NULL; //global variable declaration of head and tail pointer of type struct node

void createNode(int data){
    struct node *newNode=(struct node*)malloc(sizeof(struct node)); //creating node 
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }

}

void displayNode(){
    struct node *current=head;
    if(head==NULL){
        printf("List is empty");
        return;
    }

    printf("Nodes of singly linked list: \n");
    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;
    }
    printf("\n");
}


int main()
{
    int data, n, i;

    printf("How many nodes you want to create: ");
    scanf("%d", &n); 

    for(i=1; i<=n; i++){
        printf("Enter the data for node %d: ", i);
        scanf("%d", &data);
        createNode(data); //creating node with given data
    }

    displayNode(); //displaying the linked list

    return 0;
}

/* OUTPUT
How many nodes you want to create: 5
Enter the data for node 1: 10
Enter the data for node 2: 20
Enter the data for node 3: 30
Enter the data for node 4: 40
Enter the data for node 5: 50

Nodes of singly linked list:
10 20 30 40 50
*/