#include <stdio.h>

int max, rear = -1, front = -1;

void enqueue(int queue[]);
void dequeue(int queue[]);
void display(int queue[]);

int main() {
    printf("Enter the max size of the queue: ");
    scanf("%d", &max);
    int queue[max];
    int choice;

    do {
        printf("\nMenu\n1. Enqueue\t2. Dequeue\t3. Display\t4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue(queue);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                return 0;
            default:
                printf("\nIncorrect choice\n");
        }
    } while (choice != 4);

    return 0;
}

void enqueue(int queue[]) {
    if ((front == 0 && rear == max - 1) || (rear == (front - 1) % max)) {
        printf("\nQueue is full, cannot enqueue\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % max;
        printf("Enter the data: ");
        scanf("%d", &queue[rear]);
    }
}

void dequeue(int queue[]) {
    if (front == -1) {
        printf("\nQueue is empty, cannot dequeue\n");
    } else {
        printf("The data %d has been dequeued\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % max;
        }
    }
}

void display(int queue[]) {
    int i;
    if (front == -1) {
        printf("\nThe queue is empty\n");
    } else {
        printf("\nQueue: ");
        for (i = front; i != rear; i = (i + 1) % max) {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
        printf("\nFront: %d\n", front);
        printf("Rear: %d\n", rear);
    }
    printf("\n");
}
