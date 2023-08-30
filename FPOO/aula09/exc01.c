#include <stdio.h>
#include <string.h>

int main(){
	int n;
	
	printf("Digite o numero de doadores: ");
	scanf("%d", &n);
	
	char nome[n][20], sexo[n][1];
	int idade[n], dias[n], i;
	
	for(i = 0; i < n; i++){
		printf("Digite o nome do doador %d: ", i + 1);
		scanf("%s", &nome[i]);
		
		printf("Digite a idade do doador %d: ", i + 1);
		scanf("%d", &idade[i]);
		
		printf("Digite o sexo do doador %d (M ou F): ", i + 1);
		scanf("%s", &sexo[i]);
		
		printf("Digite os dias desde a ultima doacao do doador %d: ", i + 1);
		scanf("%d", &dias[i]);
	}
	
	printf("Relatorio de doadores\n");
	
	for(i = 0; i < n; i++){
		char status[10];
		
		if((sexo[i] == 'M' || sexo[i] == 'm') && dias[i] >= 60){
			strcpy(status, "Apto");
		}else if((sexo[i] == 'F' || sexo[i] == 'f') && dias[i] >= 90){
			strcpy(status, "Apto");
		}else{
			strcpy(status, "Inapto");
		}
		
		printf("Nome: %s\n", nome[i]);
		printf("Idade: %d\n", idade[i]);
		printf("Sexo: %s\n", sexo[i]);
		printf("Status: %s\n", status[i]);
		
}
	return 0;
}




