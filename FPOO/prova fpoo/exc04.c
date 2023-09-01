#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	int produto;
	
	printf("Quantos produtos foram comprados: ");
	scanf("%d", &produto);
	
	char nome[produto][20];
	int custo, preco, i, ml;
	
	for(i = 0; i < produto; i++){
		printf("Digite o nome e o custo do produto %d: ", i + 1);
		scanf("%s %d", &nome, &custo);
		
		printf("Qual a margem de lucro a aplicar: ", i + 1);
		scanf("%d", &ml);
		
		preco = custo * (1 + ml / 100);
	}
		for(i = 0; i < produto; i++){
		printf("%s %d \n", nome, preco);
	}
		return 0;
}
