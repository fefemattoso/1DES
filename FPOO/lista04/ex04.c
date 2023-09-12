#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char nomes[5][50];
    float precos[5];
    int i, caro = 0, barato = 0;

    for(i = 0; i < 5; i++){
        printf("Digite o nome da mercadoria %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preço da mercadoria %d: R$", i + 1);
        scanf("%f", &precos[i]);
    }

    for(i = 1; i < 5; i++){
        if (precos[i] > precos[caro]) {
            caro = i;
        }
        if (precos[i] < precos[barato]) {
            barato = i;
        }
    }

    printf("\nMercadoria mais cara:\n");
    printf("Nome: %s\n", nomes[caro]);
    printf("Preço: R$%.2f\n", precos[caro]);

    printf("\nMercadoria mais barata:\n");
    printf("Nome: %s\n", nomes[barato]);
    printf("Preço: R$%.2f\n", precos[barato]);

    return 0;
}
