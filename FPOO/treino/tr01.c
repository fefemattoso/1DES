#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	int telefone[8], cep[8];
	char nome[50], sobrenome[50], endereco[50];
	
	printf("\tColeta de dados\n\n");
	
	printf("Digite seu nome completo: ");
	scanf("%s %s", nome, sobrenome);
	
	printf("Digite seu endereço: ");
	scanf("%s", endereco);
	
	printf("Digite seu cep: ");
	scanf("%d", &cep);
	
	printf("Digite seu telefone: ");
	scanf("%d", &telefone);
	
	
	printf("Nome: %c \n", nome);
	printf("Endereço: %c \n", endereco);
	printf("Cep: %d \n", cep);
	printf("Telefone: %d \n", telefone);
	
	
	return 0;
}
