#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char str[50];
	int numero, soma;
	
	arquivo = fopen("arquivo.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}
	
	printf("Conteúdo do arquivo\n");
	
	while(fscanf(arquivo, "%d\n", &numero) != EOF){
		printf(" %d ", numero);
		soma += numero;
	}
	
	printf("\nSoma dos números no arquivo: %d\n", soma);
	
	fclose(arquivo);
	
	return 0;
}
