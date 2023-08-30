#include <stdio.h>
#include <string.h>

int main(){
	
	char cidade[100];
	int nCand;
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &cidade);
	
	printf("Digite o numero de candidatos: ");
	scanf("%d", &nCand);
	
	char candidatos[nCand][30];
	int votos[nCard], brancos, nulos, i;
	
	for(i = 0; i < nCand; i++){
		printf("Digite o nome do candidato %d: ", i + 1);
		scanf("%s", &candidatos[i]);
		
		printf("Digite quantos votos o candidato %s recebeu: ", candidatos[i]);
		scanf("%d", &votos[i]);
		
		votosTotal += votos[i];
	}
	
	printf("Digite a quantidade de votos brancos: ");
	scanf("%d", &brancos);
	
	printf("Digite a quatidade de votos nulos: ");
	scanf("%d", &nulos);
	
	votosValidos += brancos
	
	if(votosValidos > nulos){
		printf("Eleicao valida!");
		
		if(votosValidos > 200000){
			int maiorVoto = votos[0];
			int eleito = 0;
			int segundo = -1;
			
			for(i = 0; i < nCand; i++){
				if(votos[i] > maiorVoto){
					segundo = eleito;
					eleito = i;
					maiorVoto = votos[i];
				}else if(votos[i] > votos[segundo] && votos[i] != maiorVoto){
					segundo = i;
				}
			}
			
			float porcentagemEleito = (float) votos[eleito] / votosValidos * 100;
			
			if(porcentagemEleito > 50.0){
				printf("Candidato %s foi eleito no primeiro turno com %.2f votos!", votos[eleito], porcentagemEleito);
			}else if(segundo != -1){
				printf("\nSegundo turno necessario!\n");
				printf("Candidatos do segundo turno %s e %s", candidatos[eleito], candidatos[segundo]);
				
				int votosSegundo[nCand];
				int totalVotosSegundo = 0;
				
				for(i = 0; i < nCard; i++){
					if(i == eleito || i == segundo){
					printf("Digite o total de votos para o candidato %s", candidatos[i]);
					scanf("%d")
				}
				}
			}
			
		}else{
			
		}
	} else{
		printf("Eleicao invalida!");
	}
	
	return 0;
}
