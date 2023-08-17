#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int valor, result;
	printf("digite o valor do produto:\n\n");
	scanf("%i", &valor);
	if(valor > 1000){
		result = valor - (valor * 0.08);
		printf("o valor do produto com desconto de 8%% é: %i", result);
	}
	return 0;
}
