#include <stdio.h> //Entrada e Saída padrão
#include <locale.h> //Configurações de Localização
#include <string.h> //Strings são vetores de caracteres

int main(){
	setlocale(LC_ALL,"");//Configurações
	char grupos[5][20];
	int pontos[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome do %dª grupo: ", i + 1);
		gets(grupos[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digite pontos do %s:",grupos[i]);
		scanf("%d",&pontos[i]);
	}
	printf("%s pontos: %d\n\n", grupos[0], pontos[0]);
	printf("%s pontos: %d\n\n", grupos[1], pontos[1]);
	printf("%s pontos: %d\n\n", grupos[2], pontos[2]);
	printf("%s pontos: %d\n\n", grupos[3], pontos[3]);
	printf("%s pontos: %d\n\n", grupos[4], pontos[4]);

	return 0;
}
