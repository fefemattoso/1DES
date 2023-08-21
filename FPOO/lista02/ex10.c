#include <stdio.h>

int main(){
	float prov1, prov2, proj, media, rec;
  
  printf("Digite a nota da sua primeira prova: \n");
  scanf("%f", &prov1);
  printf(" \n");
  printf("Digite a nota da sua segunda prova: \n");
  scanf("%f", &prov2);
  printf(" \n");
  printf("Digite a nota do seu projeto: \n");
  scanf("%f", &proj);
  printf(" \n");
  media =  (prov1 + prov2 + proj)/3.0;
  
  printf("Resultado: \n ");
  printf(" \n");
  
  if(media >=  5) printf("Voce foi aprovado! Sua media: %.2f!! \n",media);
  
  else if(media <= 5 && media >= 2){
  	printf("Sua media foi %.2f, voce esta de recuperacao! \n", media);
  	printf(" \n");
  	printf("Digite a nota da sua recuperacao: \n");
  	scanf("%f", &rec);
  	printf(" \n");
  	float mediaFinal = (media + rec)/2.0;
  	
  	printf("Resultado final: \n ");
  	
    printf(" \n");
  	
  	if(mediaFinal >= 5) printf("Voce foi aprovado na recuperacao! Sua media final foi %.2f \n", mediaFinal);
  	
  	else printf("Voce reprovou! Sua media final foi %.2f! \n", mediaFinal);
  }
  
  return 0;
}