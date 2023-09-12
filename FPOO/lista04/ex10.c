#include <stdio.h>

int main() {
    int vetor[6], i, temp;

    printf("Digite 6 valores inteiros:\n");
    for(i = 0; i < 6; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 3; i++){
        temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    printf("\nValores trocados de maneira inversa:\n");
    for(i = 0; i < 6; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
