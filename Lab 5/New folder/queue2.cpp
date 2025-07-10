#include <stdio.h>
#define MAX 2

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
    return ((rear + 1) % MAX) == front;
}

int isEmpty() {
    return front == -1;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty()) {  
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue[rear] = value;
    printf("%d enqueued into queue\n", value);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return value;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    char choice;
    int data;
    do {
        printf("\nEnter your choice:\n");
        printf("1: Enqueue\n2: Dequeue\n3: Display\nq: Quit\n");
        printf("Choice: ");
        scanf(" %c", &choice); 

        switch(choice) {
            case '1':
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case '2':
                printf("Dequeuing element...\n");
                data = dequeue();
                if (data != -1) {
                    printf("Dequeued: %d\n", data);
                }
                break;
            case '3':
                display();
                break;
            case '4':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != '4');
    return 0;
}

