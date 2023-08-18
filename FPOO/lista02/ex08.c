#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o valor A: \n");
    scanf("%i", &a);
    printf("Digite o valor B: \n");
    scanf("%i", &b);
    printf(" \n");

    if(a > b){
        printf("%i(a) e maior que %i(b)", a, b);
    }

    else if(b > a){
        printf("%i(b) e maior que %i(a)", b, a);
    }

    else if(a == b){
        printf("%i(a) e %i(b) sao iguais", a, b);
    }

    return 0;
}