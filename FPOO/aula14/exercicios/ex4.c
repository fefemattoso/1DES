#include <stdio.h>
#include <stdlib.h>

// Estrutura de n� para lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Estrutura de lista
typedef struct {
    Node* head;
    int size;
} List;

// Inicializar uma lista
void init(List* list) {
    list->head = NULL;
    list->size = 0;
}

// Inserir um elemento no in�cio da lista
void insert(List* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
    list->size++;
}

// Remover um elemento da lista
void removeElement(List* list, int value) {
    Node* current = list->head;
    Node* previous = NULL;

    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current != NULL) {
        if (previous != NULL) {
            previous->next = current->next;
        } else {
            list->head = current->next;
        }
        free(current);
        list->size--;
    }
}

// Exibir os elementos da lista
void display(List* list) {
    Node* current = list->head;
    printf("Elementos na lista:\n");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main() {
    int choice, value;
    List list;
    
    // Inicializa a lista
    init(&list);

    while (1) {
        printf("Escolha a estrutura de dados:\n");
        printf("1. Pilha\n");
        printf("2. Fila\n");
        printf("3. Lista\n");
        printf("4. Sair\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Op��o de pilha selecionada.\n");
                // Implemente aqui as opera��es da pilha
                break;
            case 2:
                printf("Op��o de fila selecionada.\n");
                // Implemente aqui as opera��es da fila
                break;
            case 3:
                printf("Op��o de lista selecionada.\n");
                printf("1. Inserir elemento\n");
                printf("2. Remover elemento\n");
                printf("3. Exibir lista\n");
                printf("4. Voltar ao menu principal\n");

                while (1) {
                    printf("Escolha a a��o na lista: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Digite o valor a ser inserido: ");
                            scanf("%d", &value);
                            insert(&list, value);
                            break;
                        case 2:
                            printf("Digite o valor a ser removido: ");
                            scanf("%d", &value);
                            removeElement(&list, value);
                            break;
                        case 3:
                            display(&list);
                            break;
                        case 4:
                            break;
                        default:
                            printf("Op��o inv�lida.\n");
                    }

                    if (choice == 4) {
                        break;
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Op��o inv�lida.\n");
        }
    }

    return 0;
}

