
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"ListaEncadeadaSimples.h"



/* fun��o de inicializa��o: retorna uma lista vazia */
//Fun�a� importante para que  n�o ocorra bugs
Lista* inicializa (void)
{
    return NULL;
}











/* fun��o auxiliar insere_ordenado: cria e inicializa um n� */
Lista* cria (int v)
{
    Lista* p = (Lista*) malloc(sizeof(Lista));
    p->info = v;
    return p;
}
/* fun��o insere_ordenado: insere elemento em ordem */
/**Inser��o ordenada **/
Lista* insere_ordenado (Lista* l, int v)
// lista*L e  a lista que vamos inserir . o int v e o valor que vamos inserir lista
{
    Lista* novo = cria(v); /* cria novo n� */
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista*/


    /* procura posi��o de inser��o */
    while (p != NULL && p->info < v)
    {
        ant = p;
        p = p->prox;
    }
    /* insere elemento */
    if (ant == NULL)   /* insere elemento no in�cio */
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





/* fun��o imprime: imprime valores dos elementos */
/**Impress�o*/
void imprime (Lista* l)
{
    Lista* p; /* vari�vel auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}



/* fun��o busca: busca um elemento na lista */
/** Busca informa��o **/
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
    printf("info %d n�o encotrada =NULL\n",v);
    return NULL; /* n�o achou o elemento */
}



/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
/** Teste vazia **/
int vazia (Lista* l)
{
    if (l == NULL)
    {

        return 1;// vazio
    }
    else
    {

        return 0; // n�o vazio
    }
}



/* fun��o retira: retira elemento da lista */
/**Exclus�o */
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
        return l; /* n�o achou: retorna lista original */
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





//Libera��o da lista
/**  Libera��o da Lista  **/
void libera (Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento
*/
        free(p); /* libera a mem�ria apontada por p */
        p = t; /* faz p apontar para o pr�ximo */
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

