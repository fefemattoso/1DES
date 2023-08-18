#include <stdio.h>

int main(){
   float calca, shorts, camiseta, descontCalca, descontShorts, descontCamiseta, precoPromo, preco;

   printf("Digite a soma dos valores das calcas: ");
   scanf("%f", &calca);
   printf(" \n");
   printf("Digitea soma dos valores dos shorts: ");
   scanf("%f", &shorts);
   printf(" \n");
   printf("Digite a soma dos valores das camisetas: ");
   scanf("%f", &camiseta);
   printf(" \n");
   
   descontCalca = calca - (calca * 0.15);
   
   descontCamiseta = camiseta - (camiseta * 0.2);
   
   descontShorts = shorts - (shorts * 0.1);
   
   precoPromo = descontCalca + descontCamiseta + descontShorts;
   
   preco = calca + camiseta + shorts;
   
   if(precoPromo == 0){
   	printf("Voce nao comprou nada \n");
   }
   else{
   	printf("O preco original da compra seria R$%.2f, com a promocao o valor da compra ficou R$%.2f \n\n", preco, precoPromo);
   }
   
   return 0;
}
