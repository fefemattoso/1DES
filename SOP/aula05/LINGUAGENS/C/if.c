#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	int escolha;
	printf("Voc� gosta de pizza de br�colis??? SIM(1) ou N�O(2)\n\n");
	scanf("%i", &escolha);
	
	if(escolha == 1){
		printf("ok, vc � uma boa pessoa");
	}
	else if(escolha == 2){
		printf("vc � esquisito");
	}

	return 0;
}
