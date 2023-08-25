#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, cont = 1;
	
	while(cont == 1){
		numero *= 0;
	printf("Digite um numero: \n");
	scanf("%i", &numero);
	printf(" \n");
	
	if(numero % 2 == 0){
		printf(" Sequencia de numeros ÍMPARES entre %i a 0: \n\n", numero);
		numero--;
	    for( numero >= 1; numero -= 2){
	    	printf(" %i \n", numero);
		}
	}
	else if(numero % 2 == 1){
		
		printf("Sequencia de numeros ÍMPARES entre %i a 0: \n\n", numero);
	    for( numero >= 1; numero -=2){
	    	printf(" %i \n\n", numero);
		}
	}
	printf("Deseja continuar? sim(1) ou nao(2) \n");
	scanf("%i", &cont);
}
	return 0;
}
