#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numero, idade, dias, sexoNum;
	char nome[20], sexo[5];
	int i;
	
	printf("Digite o total de doadores: \n");
	scanf("%i", &numero);
	if(numero <= 0){
		printf("Sem doadores.");
	}
	for(i = 0; i < numero; i++){
		printf("Digite o nome da %i� pessoa: \n", i + 1);
		scanf("%s", &nome);
		printf("Digite a idade da %i� pessoa: \n", i + 1);
		scanf("%i", &idade);
		printf("Digite o sexo da %i� pessoa, feminino(1) ou masculino(2): \n", i + 1);
		scanf("%s", &sexo);
		printf("Digite os dias desde a �ltima doa��o de sangue da %i� pessoa: \n", i + 1);
		scanf("%i", &dias);
	}
	if(sexo == 2){
	if(dias >= 60, sexoNum = 2){
		printf("V�lido");}
		else if(dias < 60, sexoNum = 2){
		printf("Inv�lido.");}
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Sexo: Masculino \n");
	printf("Dias desde a �ltima vez: %i \n", dias);
}
	if(sexo == 1){
	 if(dias >= 90, sexoNum = 1){
		printf("V�lido");}
		else if(dias < 90, sexoNum = 1){
		printf("Inv�lido.\n");}
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Sexo: Feminino \n");
	printf("Dias desde a �ltima vez: %i \n", dias);	
}
return 0;
}
