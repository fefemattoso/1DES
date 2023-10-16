#include <stdio.h>
#define SIZE 6
int pilha[SIZE];
int ponteiro = 0;
int i;
void mostraPilha(){
	printf("Pilha:\n");
	for(i = 0; i < ponteiro; i++)
		printf("%d\n", pilha[i]);
}
int push(int dado){
	if(ponteiro < SIZE){
		pilha[ponteiro] = dado;
		ponteiro++;
		return 1;
	}
	else return 0;
}

int pop(){
	if(ponteiro >= 0){
		ponteiro--;
		return 1;
	}else
		return 0;
}

int main(){
	push(41);
	mostraPilha();
	push(22);
	mostraPilha();
	push(14);
	mostraPilha();
	pop();
	mostraPilha();
	pop();
	mostraPilha();
}

