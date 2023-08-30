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
		printf("Digite o nome da %iª pessoa: \n", i + 1);
		scanf("%s", &nome);
		printf("Digite a idade da %iª pessoa: \n", i + 1);
		scanf("%i", &idade);
		printf("Digite o sexo da %iª pessoa, feminino(1) ou masculino(2): \n", i + 1);
		scanf("%s", &sexo);
		printf("Digite os dias desde a última doação de sangue da %iª pessoa: \n", i + 1);
		scanf("%i", &dias);
	}
	if(sexo == 2){
	if(dias >= 60, sexoNum = 2){
		printf("Válido");}
		else if(dias < 60, sexoNum = 2){
		printf("Inválido.");}
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Sexo: Masculino \n");
	printf("Dias desde a última vez: %i \n", dias);
}
	if(sexo == 1){
	 if(dias >= 90, sexoNum = 1){
		printf("Válido");}
		else if(dias < 90, sexoNum = 1){
		printf("Inválido.\n");}
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Sexo: Feminino \n");
	printf("Dias desde a última vez: %i \n", dias);	
}
return 0;
}
