#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para inicializar uma lista vazia
Node* initList() {
    return NULL;
}

// Função para inserir um elemento no início da lista
Node* insert(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Função para remover um elemento da lista
Node* removeElement(Node* head, int value) {
    Node* current = head;
    Node* previous = NULL;

    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current != NULL) {
        if (previous != NULL) {
            previous->next = current->next;
        } else {
            head = current->next;
        }
        free(current);
    }

    return head;
}

// Função para exibir os elementos da lista
void display(Node* head) {
    Node* current = head;
    printf("Elementos na lista:\n");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

// Função para liberar a memória ocupada pela lista
void freeList(Node* head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = initList();
    int choice, value;

    while (1) {
        printf("Escolha a ação:\n");
        printf("1. Inserir na lista\n");
        printf("2. Remover da lista\n");
        printf("3. Mostrar a lista\n");
        printf("4. Sair\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &value);
                head = insert(head, value);
                break;
            case 2:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &value);
                head = removeElement(head, value);
                break;
            case 3:
                display(head);
                break;
            case 4:
                freeList(head); // Libera a memória da lista antes de sair
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}

