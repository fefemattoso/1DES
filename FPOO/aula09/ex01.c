#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int numero;
	int i;
	
	printf("Digite o total de doadores:\n");
		scanf("%d", numero);
	if (numero <= 0){
		printf("Sem doadores.");
	}
		
	for(i = 0; i < numero; i++){
		int idade[numero], dias[numero];
		char nome[numero][20], sexo[numero][20];
		printf("Nome da %dª pessoa:\n", i + 1);
		scanf("%s", nome[i]);
		printf("Idade da %dª pessoa:\n", i + 1);
		scanf("%d", idade[i]);
		printf("Sexo da %dª pessoa:\n", i + 1);
		scanf("%s", sexo[i]);
		printf("Dias desde a última doação da %dª pessoa:\n", i + 1);
		scanf("%d", dias[i]);
	
	}
return 0;
}

/*switch(sexo[2]){
		case 1: 
		strcpy(sexo[i], "M");
			break;
		case 2: 
		strcpy(sexo[i], "F");
			break;
	}*/
