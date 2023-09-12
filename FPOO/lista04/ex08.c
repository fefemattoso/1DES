#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], resultado[5], i;

    printf("Digite 5 valores inteiros para o primeiro vetor:\n");
    for(i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 5 valores inteiros para o segundo vetor:\n");
    for(i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 5; i++){
        resultado[i] = vetor1[i] + vetor2[4 - i];
    }

    printf("\nResultado da soma do primeiro vetor com o inverso do segundo vetor:\n");
    for(i = 0; i < 5; i++){
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

