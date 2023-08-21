#include <stdio.h>
int main(){
	int numero = 0;
	while (numero != 14){
		printf("digite um numero:");
		scanf("%d", &numero);
		printf("o dobro deste numero = %d\n", numero * 2);
}
	return 0;
}
