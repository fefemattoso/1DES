#include<stdio.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  int valores[5], n1;
  int i, j, cont = 1;

    while(cont == 1){ 
    
    for( i = 0; i < 5; i++){
		valores[i] *= 0;			
	}
	 
    printf("Digite 5 valores inteiros: \n");
    scanf("%i %i %i %i %i", &valores[0], &valores[1], &valores[2], &valores[3], &valores[4]);

    for( i = 0; i < 5; i++){
        for( j = i+1; j < 5; j++){
            if(valores[i] > valores[j]){
                n1 = valores[i];
                valores[i] = valores[j];
                valores[j] = n1;
            }
        }
    } 
   
    printf("Ordem crescente dos numeros: \n\n");
    printf(" %i\n", valores[0]);
    printf(" %i\n", valores[1]);
    printf(" %i\n", valores[2]);
    printf(" %i\n", valores[3]);
    printf(" %i\n", valores[4]);
    printf("Deseja continuar? sim(1) ou nao(2) \n");
	scanf("%i", &cont);
  } 
  return 0;
}
