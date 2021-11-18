
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"ListaEncadeadaSimples.h"



/* função de inicialização: retorna uma lista vazia */
//Funçaõ importante para que  não ocorra bugs
Lista* inicializa (void)
{
    return NULL;
}











/* função auxiliar insere_ordenado: cria e inicializa um nó */
Lista* cria (int v)
{
    Lista* p = (Lista*) malloc(sizeof(Lista));
    p->info = v;
    return p;
}
/* função insere_ordenado: insere elemento em ordem */
/**Inserção ordenada **/
Lista* insere_ordenado (Lista* l, int v)
// lista*L e  a lista que vamos inserir . o int v e o valor que vamos inserir lista
{
    Lista* novo = cria(v); /* cria novo nó */
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/


    /* procura posição de inserção */
    while (p != NULL && p->info < v)
    {
        ant = p;
        p = p->prox;
    }
    /* insere elemento */
    if (ant == NULL)   /* insere elemento no início */
    {
        novo->prox = l;
        l = novo;
    }
    else   /* insere elemento no meio da lista */
    {
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return l;
}





/* função imprime: imprime valores dos elementos */
/**Impressão*/
void imprime (Lista* l)
{
    Lista* p; /* variável auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}



/* função busca: busca um elemento na lista */
/** Busca informação **/
Lista* busca (Lista* l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p=p->prox)
    {
        if (p->info == v)
        {
            printf("info %d encontrada \n",v);
            return p;
        }
    }
    printf("info %d não encotrada =NULL\n",v);
    return NULL; /* não achou o elemento */
}



/* função vazia: retorna 1 se vazia ou 0 se não vazia */
/** Teste vazia **/
int vazia (Lista* l)
{
    if (l == NULL)
    {

        return 1;// vazio
    }
    else
    {

        return 0; // não vazio
    }
}



/* função retira: retira elemento da lista */
/**Exclusão */
Lista* retira (Lista* l, int v)
{
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        return l; /* não achou: retorna lista original */
    /* retira elemento */
    if (ant == NULL)
    {
        /* retira elemento do inicio */
        l = p->prox;
    }
    else
    {
        /* retira elemento do meio da lista */
        ant->prox = p->prox;
    }
    free(p);
    return l;
}





//Liberação da lista
/**  Liberação da Lista  **/
void libera (Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox; /* guarda referência para o próximo elemento
*/
        free(p); /* libera a memória apontada por p */
        p = t; /* faz p apontar para o próximo */
    }
}



/*********************************************88
            Exercicio
*******************************/
/***Em processo*/
int igual (Lista* l1, Lista* l2){
    Lista *p1;
    Lista *p2;
    for(    p1=l1;  p1!=NULL;  p1=p1->prox){
        for(p2=l2;  p2!=NULL;  p2=p2->prox){
            if(p1->info==p2->info){

                return 0;
            }
            else{

                return 1;
            }
        }
    }

}

