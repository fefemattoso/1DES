#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    int numeros[5], i, j, imax, temp;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 4; i++){
        imax = i;
        for(j = i + 1; j < 5; j++){
            if(numeros[j] > numeros[imax]){
                imax = j;
            }
        }

        temp = numeros[i];
        numeros[i] = numeros[imax];
        numeros[imax] = temp;
    }

    printf("\nNúmeros em ordem decrescente:\n");
    for(i = 0; i < 5; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

