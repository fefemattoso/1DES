#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	int zero = 0, cont = 1;
	
	while(cont == 1){
	numero *= 0;
	zero *= 0;
	printf("\n Digite um numero inteiro MAIOR que 0: \n");
	scanf("%i", &numero);
	printf("\n");
	
	if(numero == zero){
		while(numero == zero){
			printf("Voce digitou 0, digite outro valor: \n ");
			scanf("%i", &numero);
			printf("\n");
		}
	}
	
	printf(" Sequencia de 0 a %i: \n", numero);
	while(numero >= zero){
		printf(" %i \n", zero);
		zero++;
	}
	printf("\n Deseja refazer a sequencia? sim(1) ou nao(2) \n ");
	scanf("%i", &cont); 
 }
	return 0;
}
