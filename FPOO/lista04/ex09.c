#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int vetor[10];
    int somaPares = 0, somaImpares = 0;
    int totalPares = 0, totalImpares = 0, i;
    float mediaPares, mediaImpares;

    printf("Digite 10 valores inteiros:\n");
    for(i = 0; i < 10; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            somaPares += vetor[i];
            totalPares++;
        }else{
            somaImpares += vetor[i];
            totalImpares++;
        }
    }

    mediaPares = (totalPares > 0) ? (float)somaPares / totalPares : 0;
    mediaImpares = (totalImpares > 0) ? (float)somaImpares / totalImpares : 0;

    printf("\nResultados:\n");
    printf("Soma dos números pares: %d\n", somaPares);
    printf("Média dos números pares: %.2f\n", mediaPares);
    printf("Total de números pares: %d\n", totalPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);
    printf("Média dos números ímpares: %.2f\n", mediaImpares);
    printf("Total de números ímpares: %d\n", totalImpares);

    return 0;
}

