#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeafa.h"

int soma(Lista L){
    if(L == Null) return 0;// retorna 0 caso a lista esteja vazia   
    return L->item + soma(L->prox);//soma o item com o proximo item da lista, recursivamente. 0
}

int main(){
    Lista L = no(3, no(1, no(5, no(4, NULL))));
    int total = soma(L);
    printf("> %d", total)
}

// o resultado da soma, o codigo retornará 13 nesse exemplo