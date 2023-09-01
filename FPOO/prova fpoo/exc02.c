#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int tempo, horas = 0, minutos = 0, segundos = 0, i;
	
	//entrada
	printf("\tConversor de segundos para horas:\n\n");
	printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);
    
    //processamento
    horas = tempo / 3600;
    i = tempo % 3600;
    minutos = i / 60;
    segundos = i % 60;
    
	//saída
	printf("%d segundos\n", tempo);
	printf("Tempo em horas = %d : %d : %d", horas, minutos, segundos);
return 0;
}

	/*anotaçoes:
	tempo > 0
	tempo < 60
	segundos = tempo;
	tempo = 0;
	tempo < (60 * 60) = 3600
	tempo = tempo - 60
	tempo = tempo - (60 * 60) = 3600*/



