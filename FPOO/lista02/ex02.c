#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");

#include <stdio.h>

int main(){
    int filhos, salFilhos;
    float salario , salFinal;

    printf("Digite o seu salario: \n");
    scanf("%f",&salario);
    printf(" \n");
    printf("Digite quantos filhos voce tem: \n");
    scanf("%i",&filhos);
    printf(" \n");

    if(salario <= 2000 && filhos >= 1){
       
       salFilhos = filhos * 45;

       salFinal = salario + salFilhos;

       printf("Voc� receber� um salario fam�lia de %i, oque resultara em um sal�rio final de R$ %.1f",salFilhos,salFinal);
    }

    else if(salario <= 2000 && filhos == 0){
        printf("O seu sal�rio continuar� sendo R$ %.2f pois voc� n�o tem filhos", salario);
    }

    else{
        printf("O seu sal�rio continuar� sendo R$ %.2f pois � maior que R$2000", salario);
    }

    return 0;
}
