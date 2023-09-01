#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	float nota1, nota2, media;
	
	//entrada
	printf("\tPrograma que calcula a média de duas notas.\n");
	printf("Digite as duas notas: ");
	scanf("%f %f", &nota1, &nota2);
	
	//processamento
	media = (nota1 + nota2) / 2;
	if(media <= 6){
		printf("Reprovado!\n");
	} else{
			printf("Aprovado!\n");
		}
		
	//saída
	printf("Sua média é %.1f", media);

	return 0;
}
