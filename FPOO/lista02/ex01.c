#include <stdio.h>

int main(){
	float preco, desconto, valor;
	
	printf("Digite o preco do produto: \n");
	scanf("%f", &preco);
    	printf(" \n");

    	if(preco >= 1000){
    	desconto = preco * 0.08;
    	valor = preco - desconto;
    	
    	printf("O produto vale R$%.2f , com o desconto de 8%%, o preco final sera R$%.2f ", preco, valor);
    	
	}
	
	else{
		printf("O preco final e %.2f por nao ter nenhum desconto",preco);
	}
	
	return 0;
    
	
}