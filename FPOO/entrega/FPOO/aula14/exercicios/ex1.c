#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
int i;
typedef struct {
    int items[MAXSIZE];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAXSIZE - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("A pilha est� cheia. N�o � poss�vel inserir.\n");
    } else {
        s->items[++(s->top)] = value;
    }
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("A pilha est� vazia. N�o � poss�vel remover.\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

void display(Stack *s) {
    if (isEmpty(s)) {
        printf("A pilha est� vazia.\n");
    } else {
        printf("Elementos na pilha:\n");
        for (i = 0; i <= s->top; i++) {
            printf("%d\n", s->items[i]);
        }
    }
}

int main() {
    Stack s;
    init(&s);

    int choice, value;

    while (1) {
        printf("Escolha a a��o:\n");
        printf("1. Inserir na pilha\n");
        printf("2. Remover da pilha\n");
        printf("3. Mostrar a pilha\n");
        printf("4. Sair\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                display(&s);
                break;
            case 4:
                exit(0);
            default:
                printf("Op��o inv�lida.\n");
        }
    }

    return 0;
}

