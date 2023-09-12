#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char nomes[5][50];
    float precos[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o nome da mercadoria %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preço da mercadoria %d: R$", i + 1);
        scanf("%f", &precos[i]);

        if (precos[i] < 1000) {
            precos[i] *= 1.05; 
        } else {
            precos[i] *= 1.07;
        }
    }

    printf("\nMercadorias e seus novos preços:\n");
    for(i = 0; i < 5; i++){
        printf("Mercadoria %d: %s - Novo preço: R$%.2f\n", i + 1, nomes[i], precos[i]);
    }

    return 0;
}

