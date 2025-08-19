#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct queue {
    struct node *front;
    struct node *rear;
};

void create_queue(struct queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

struct queue *insert(struct queue *q, int val) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    return q;
}

struct queue *delete_element(struct queue *q) {
    if (q->front == NULL) {
        printf("\nQueue is empty!\n");
        return q;
    }
    struct node *temp = q->front;
    printf("\nDeleted: %d\n", temp->data);
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    return q;
}

int peek(struct queue *q) {
    if (q->front == NULL) {
        printf("\nQueue is empty!\n");
        return -1;
    }
    return q->front->data;
}

void display(struct queue *q) {
    struct node *temp = q->front;
    if (temp == NULL) {
        printf("\nQueue is empty!\n");
        return;
    }
    printf("\nQueue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    create_queue(q);

    int option, val;

    do {
        printf("\n1. Insert\n2. Delete\n3. Peek\n4. Display\n5. Exit");
        printf("\nChoose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(q, val);
                break;
            case 2:
                delete_element(q);
                break;
            case 3:
                val = peek(q);
                if (val != -1)
                    printf("Front value: %d\n", val);
                break;
            case 4:
                display(q);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (option != 5);

    free(q);
    return 0;
}
