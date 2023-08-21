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

       printf("Você receberá um salario família de %i, oque resultara em um salário final de R$ %.1f",salFilhos,salFinal);
    }

    else if(salario <= 2000 && filhos == 0){
        printf("O seu salário continuará sendo R$ %.2f pois você não tem filhos", salario);
    }

    else{
        printf("O seu salário continuará sendo R$ %.2f pois é maior que R$2000", salario);
    }

    return 0;
}
