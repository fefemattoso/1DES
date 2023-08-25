#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int numero, multi, result, zero = 0, cont = 1;
	
	while(cont == 1){
		result *= 0;
		numero *= 0;
		multi *= 0;
	printf("Digite um numero inteiro: \n ");
	scanf("%i", &numero);
	multi = 1;
	if(numero == zero){
		while(numero == zero){
			printf("Você digitou 0, digite outro valor: \n ");
			scanf("%i", &numero);
			printf("\n");
		}
	}
	
	printf("Tabuada do %i: \n", numero);
    while(multi <= 10){
		result = numero * multi;
		printf(" %i x %i = %i \n\n", numero, multi, result);
		multi++;
	}
	printf("Deseja continuar? sim(1) ou nao(2) \n");
	scanf("%i", &cont);	
}
	return 0;
}
