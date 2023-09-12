#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    char nomes[5][30], tempnome[30];
    int vitorias[5], empates[5], pontos[5];
    int i, j, temp, tempvit, tempemp;

    for(i = 0; i < 5; i++){
        printf("Digite o nome do time %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o número de vitórias do time %d: ", i + 1);
        scanf("%d", &vitorias[i]);
        printf("Digite o número de empates do time %d: ", i + 1);
        scanf("%d", &empates[i]);

        pontos[i] = (vitorias[i] * 3) + empates[i];
    }

    for(i = 0; i < 4; i++){
        int max = i;
        for(j = i + 1; j < 5; j++){
            if(pontos[j] > pontos[max]){
                max = j;
            }
        }
        
        temp = pontos[i];
        pontos[i] = pontos[max];
        pontos[max] = temp;

        strcpy(tempnome, nomes[i]);
        strcpy(nomes[i], nomes[max]);
        strcpy(nomes[max], tempnome);

        tempvit = vitorias[i];
        vitorias[i] = vitorias[max];
        vitorias[max] = tempvit;

        tempemp = empates[i];
        empates[i] = empates[max];
        empates[max] = tempemp;
    }

    printf("\nClassificação:\n");
    for(i = 0; i < 5; i++){
        printf("%dº lugar: %s - Pontos: %d\n", i + 1, nomes[i], pontos[i]);
    }

    return 0;
}

