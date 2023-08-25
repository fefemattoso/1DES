#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero, cont = 1;
	while(cont == 1){
	
	printf("\n Sequencia de 10 a 200: \n\n");
	
	for(numero = 10; numero <= 200; numero++){
		printf(" %i \n\n", numero);
	 }	
	  
	printf("\n Deseja refazer a sequencia? sim(1) ou nao(2) \n");
	scanf("%i", &cont); 
	}	
	return 0;
}
