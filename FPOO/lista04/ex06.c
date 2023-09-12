#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char nomes[10][50];
    float precos[10], desconto;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o nome da mercadoria %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preço da mercadoria %d: R$", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("Digite o valor do desconto (em porcentagem): ");
    scanf("%f", &desconto);

    printf("\nDetalhes das mercadorias com desconto de %.2f%%:\n", desconto);
    for(i = 0; i < 10; i++){
        float precoOriginal = precos[i];
        float valorDesconto = (desconto / 100.0) * precoOriginal;
        float precoFinal = precoOriginal - valorDesconto;

        printf("Mercadoria %d: %s\n", i + 1, nomes[i]);
        printf("Preço Original: R$%.2f\n", precoOriginal);
        printf("Valor do Desconto: R$%.2f\n", valorDesconto);
        printf("Preço Final com Desconto: R$%.2f\n", precoFinal);
        printf("\n");
    }

    return 0;
}

