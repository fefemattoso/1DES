#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[20], sobrenome[20];
	int sis1, sis2, sis3, sis4, sis5, dia1, dia2, dia3, dia4, dia5;
	float mediasis, mediadia;
	
	printf("Digite seu nome e um sobrenome:\n");
	scanf("%s %s", &nome, &sobrenome);
	printf("Digite suas medições de pressão SIS:\n");
	scanf("%i %i %i %i %i", &sis1, &sis2, &sis3, &sis4, &sis5);
	printf("Digite suas medições de pressão DIA:\n");
	scanf("%i %i %i %i %i", &dia1, &dia2, &dia3, &dia4, &dia5);
	
	strcat(nome," ");
	strcat(nome, sobrenome);
	
	mediasis = (sis1 + sis2 + sis3 + sis4 + sis5)/5.00;
	mediadia = (dia1 + dia2 + dia3 + dia4 + dia5)/5.00;
	
	printf("%s, seus resultados são:\n", nome);
	printf("SIS= %.1f\n", mediasis);
	printf("DIA= %.1f\n", mediadia);
	
	return 0;
}
