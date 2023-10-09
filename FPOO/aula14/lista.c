#include <stdio.h> 
#include <stdlib.h> 

 struct lista{ 
     int dado; 
     struct lista *prox; 
 };
 
 struct lista *inicio = NULL; 
 struct lista *fim = NULL; 
 struct lista *aux = NULL; 
 
 void mostraLista(){ 
     aux = inicio; 
     printf("Lista:\n"); 
     while(aux != NULL){ 
         printf("%d\n", aux->dado); 
         aux = aux->prox; 
     } 
 } 
 
 int push(int dado){ 
     aux = (struct lista*) malloc(sizeof(struct lista)); 
     if(aux == NULL) return 0; 
     aux->dado = dado; 
     aux->prox = NULL;
     
     if(inicio == NULL){ 
         inicio = aux; 
         fim = aux; 
     }else{ 
         fim->prox = aux; 
         fim = aux; 
     } 
     return 1; 
 }
