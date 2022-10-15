#include <stdio.h>
#include <stdlib.h>

int size;
struct Node {
    int data;
    struct Node* link;
};

struct Queue {
    struct Node *front, *rear;
};

int count(struct Queue* q){
    int count =1;
    struct Node* temp = q->front;
    if(temp == NULL){
        return 0;
    }
    while(temp != q->rear){
        count++;
        temp = temp->link;
    }
    return count;
}

void enQueue(struct Queue* q, int value)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(size == count(q)){
        printf("Circular Queue Overflow\n");
        return;
    }
    temp->data = value;
    if (q->front == NULL)
        q->front = temp;
    else
        q->rear->link = temp;

    q->rear = temp;
    q->rear->link = q->front;
    printf("%d enqueued into Circular Queue\n",value);
}


void deQueue(struct Queue* q)
{
    if (q->front == NULL) {
        printf("Circular Queue Underflow\n");
        return ;
    }

    // If this is the last node to be deleted
    int value; // Value to be dequeued
    if (q->front == q->rear) {
        value = q->front->data;
        free(q->front);
        q->front = NULL;
        q->rear = NULL;
    }
    else // There are more than one nodes
    {
        struct Node* temp = q->front;
        value = temp->data;
        q->front = q->front->link;
        q->rear->link = q->front;
        free(temp);
    }

    printf("%d dequeued from the Circular Queue\n.",value);
}


void displayQueue(struct Queue* q)
{
    struct Node* temp = q->front;
    if (temp == NULL)
    {
        printf("\nCircular Queue is Empty.\n");
        return ;
    }
    printf("\nElements in Circular Queue are: ");
    while (temp->link != q->front) {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("%d", temp->data);
}

void peek(struct Queue* q){
    struct Node* temp = q->front;
    if (temp == NULL)
    {
        printf("\nCircular Queue is Empty.\n");
        return ;
    }
    printf("%d is the peek element.\n",temp->data);
}

void operation(struct Queue* q){
    int choice;
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            int x;
            printf("\nEnter value to be inserted.");
            scanf("%d",&x);
            enQueue(q,x);
            operation(q);
            break;
        }
        case 2:{
            deQueue(q);
            operation(q);
            break;
        }
        case 3: {
            displayQueue(q);
            operation(q);
            break;
        }
        case 4:{
            peek(q);
            operation(q);
            break;
        }
        case 5: {
            break;
        }
        default:{
            printf("Enter the choices b/w (1-5).");
            operation(q);
            break;
        }

    };
}

int main()
{
    printf("Enter the size of queue.\n");
    scanf("%d",&size);
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    printf("\n\n1. Enqueue \n2. Dequeue \n3. Display \n4. Peek\n5. Exit\n");
    operation(q);
    return 0;
}
