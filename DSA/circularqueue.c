//wap in c to enqueue and dequeue the elements in a circular queue

/* Algorithm for enqueue operation
Step 1: If front = (rear+1)%MAX then
print “Queue is full”
Step 2: If front = -1 then
front = 0
Step 3: rear = (rear+1)%MAX
Step 4: queue[rear] = item
Step 5: Exit

Algorithm for dequeue operation
Step 1: If front = -1 then
print “Queue is empty”
Step 2: item = queue[front]
Step 3: If front = rear then
front = rear = -1
Else
front = (front+1)%MAX
Step 4: Exit
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int);
int dequeue();
void display();

void main()
{
    int ch, item;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted:");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            item = dequeue();
            if (item == -1)
                printf("Queue is empty\n");
            else
                printf("The deleted element is %d\n", item);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

void enqueue(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = item;
}

int dequeue()
{
    int item;
    if (front == -1)
        return -1;
    item = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
    return item;
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("The elements of the queue are:\n");
    for (i = front; i != rear; i = (i + 1) % MAX)
        printf("%d\n", queue[i]);
    printf("%d\n", queue[i]);
}

