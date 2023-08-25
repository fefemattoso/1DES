#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero = 0, soma = 1, result, cont = 1;
	
	while(cont == 1){
		soma*=0;
		numero *= 0;
	printf("Sequencia de soma dos valores inteiros de 0 a 100 \n");
	while(soma <= 100){
	   result = numero + soma;
	   printf(" %i + %i = %i \n",numero, soma,result);
	   numero+=soma;
	   soma++;
	}
	printf("Deseja refazer a sequencia? sim(1) ou nao(2) \n");
	scanf("%i", &cont);
}
	return 0;
}

