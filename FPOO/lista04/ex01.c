#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char nomes[5][50];
    float salarios[5];
	float percentual, novo;
	int i;

    for(i = 0; i < 5; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", nomes[i]);
        printf("Digite o salário da pessoa %d: ", i+1);
        scanf("%f", &salarios[i]);
    }

    printf("Digite o percentual de reajuste (%%): ");
    scanf("%f", &percentual);

    printf("\nNovos salários:\n");
    for (i = 0; i < 5; i++) {
        novo = salarios[i] + (salarios[i] * percentual / 100);
        printf("%s: R$%.2f\n", nomes[i], novo);
    }

    return 0;
}
