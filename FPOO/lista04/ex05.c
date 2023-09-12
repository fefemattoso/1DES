#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char cidades[5][50];
    int eleitores[5], votos[5], i;
    float part;

    for(i = 0; i < 5; i++){
        printf("Digite o nome da cidade %d: ", i + 1);
        scanf("%s", cidades[i]);
        printf("Digite o número total de eleitores em %s: ", cidades[i]);
        scanf("%d", &eleitores[i]);
        printf("Digite o total de votos apurados em %s na última eleição: ", cidades[i]);
        scanf("%d", &votos[i]);
    }

    printf("\nPorcentagem de participação dos eleitores na eleição:\n");
    for(i = 0; i < 5; i++){
        part = (float)votos[i] / eleitores[i] * 100;
        printf("%s: %.2f%%\n", cidades[i], part);
    }

    return 0;
}
