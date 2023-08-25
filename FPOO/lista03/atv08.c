#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
    int numero, multi, result, valor, zero = 0, cont = 1;
	
	while(cont == 1){
		multi *= 0;
		valor *= 0;
	printf("Digite um numero inteiro: \n");
	scanf("%i", &numero);
	multi = 1;
	if(numero == zero){
		while(numero == zero){
			printf("Voce digitou 0, digite outro valor: \n");
			scanf("%i", &numero);
			printf("\n");
		}
	}
	
	valor = numero;	
	printf("Fatorial de %i: \n", numero);
    while(multi < numero){
		result = valor * multi;
		printf(" %i x %i = %i \n\n", valor, multi, result);
		valor *= multi;
		multi++;
	}
    printf("Deseja continuar? sim(1) ou nao(2) \n");
	scanf("%i", &cont);	
}
	return 0;
}
