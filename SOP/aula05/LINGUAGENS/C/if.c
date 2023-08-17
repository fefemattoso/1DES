#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	int escolha;
	printf("Você gosta de pizza de brócolis??? SIM(1) ou NÃO(2)\n\n");
	scanf("%i", &escolha);
	
	if(escolha == 1){
		printf("ok, vc é uma boa pessoa");
	}
	else if(escolha == 2){
		printf("vc é esquisito");
	}

	return 0;
}
