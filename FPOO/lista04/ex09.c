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
    printf("Soma dos n�meros pares: %d\n", somaPares);
    printf("M�dia dos n�meros pares: %.2f\n", mediaPares);
    printf("Total de n�meros pares: %d\n", totalPares);
    printf("Soma dos n�meros �mpares: %d\n", somaImpares);
    printf("M�dia dos n�meros �mpares: %.2f\n", mediaImpares);
    printf("Total de n�meros �mpares: %d\n", totalImpares);

    return 0;
}

