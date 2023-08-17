#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int salario, filhos, salfam;
	printf("digite seu salário:");
	scanf("%i", &salario);
	printf("digite o número de filhos que você tem:");
	scanf("%i", &filhos);
	if(salario <2000){
		salfam = 2000 + 45 * filhos;
		printf()
	}
	return 0;
}
