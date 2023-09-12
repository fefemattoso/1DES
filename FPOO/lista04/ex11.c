#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], valorProcurado, encontrado = 0, i;
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        vetor[i] = rand() % 101;
    }

    printf("Digite um valor inteiro para procurar no vetor: ");
    scanf("%d", &valorProcurado);

    for(i = 0; i < 10; i++){
        if (vetor[i] == valorProcurado) {
            printf("O valor %d foi encontrado na posição %d do vetor.\n", valorProcurado, i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado){
        printf("O valor %d não foi encontrado no vetor.\n", valorProcurado);
    }

    return 0;
}

