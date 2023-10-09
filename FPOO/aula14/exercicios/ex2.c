#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef struct {
    int items[MAXSIZE];
    int front, rear;
} Queue;

void init(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue *q) {
    return (q->rear == MAXSIZE - 1 && q->front == 0) || (q->rear == q->front - 1);
}

int isEmpty(Queue *q) {
    return q->front == -1;
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("A fila está cheia. Não é possível inserir.\n");
    } else {
        if (q->front == -1) {
            q->front = q->rear = 0;
        } else if (q->rear == MAXSIZE - 1) {
            q->rear = 0;
        } else {
            q->rear++;
        }
        q->items[q->rear] = value;
    }
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("A fila está vazia. Não é possível remover.\n");
        return -1;
    } else {
        int value = q->items[q->front];
        if (q->front == q->rear) {
            q->front = q->rear = -1;
        } else if (q->front == MAXSIZE - 1) {
            q->front = 0;
        } else {
            q->front++;
        }
        return value;
    }
}

void display(Queue *q) {
    if (isEmpty(q)) {
        printf("A fila está vazia.\n");
    } else {
        printf("Elementos na fila:\n");
        int i = q->front;
        if (q->front <= q->rear) {
            while (i <= q->rear) {
                printf("%d\n", q->items[i]);
                i++;
            }
        } else {
            while (i <= MAXSIZE - 1) {
                printf("%d\n", q->items[i]);
                i++;
            }
            i = 0;
            while (i <= q->rear) {
                printf("%d\n", q->items[i]);
                i++;
            }
        }
    }
}

int main() {
    Queue q;
    init(&q);

    int choice, value;

    while (1) {
        printf("Escolha a ação:\n");
        printf("1. Inserir na fila\n");
        printf("2. Remover da fila\n");
        printf("3. Mostrar a fila\n");
        printf("4. Sair\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}

