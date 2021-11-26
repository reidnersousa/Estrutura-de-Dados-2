#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhadechars.h"


struct no
{
    int  info;
    struct no* prox;
};

typedef struct no No;
struct pilha
{

    struct no* prim;
};




//função criar pilha ; pilha com lista
Pilha* cria (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

/* função auxiliar: insere no início */
/**esse char ta certo?*/
No* ins_ini_char (No* l, int cha)
{
    No* p = (No*) malloc(sizeof(No));

    p->info = cha;

    //strcpy(p->info,cha);
    p->prox = l;
    return p;
}
/* função auxiliar: retira do início */
No* ret_ini_char (No* l)
{
    No* p = l->prox;
    free(l);
    return p;
}



void push (Pilha* p, int c)
{
    p->prim = ins_ini_char(p->prim,c);
}
void  pop (Pilha* p)
{

    if (vazia(p))
    {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }



    //strcpy(p->info,cha);
    //p->info = v;
    //(p->prim->info,c);

    No*aux;
    aux=p->prim;
    p->prim=p->prim->prox;
    free(aux);

    return ;
}

int vazia (Pilha* p)
{
    return (p->prim==NULL);
}

void libera (Pilha* p)
{
    No* q = p->prim;
    while (q!=NULL)
    {
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

/* imprime: versão com lista */
void imprime (Pilha* p)
{
    No* q;
    for (q=p->prim; q!=NULL; q=q->prox)

        //erro no imprimir
        printf("%d\n",q->info);

       // printf(p->prim->info);
}



/**Funções do deve   Implementação Biblioteca (Pilhas Dinâmicas) */
//empilha
void empilha(Pilha*pi ,char val ){
    No* p = (No*) malloc(sizeof(No));
    p->info = val;
    p->prox = pi->prim;
    pi->prim = p;
}


///
int pilhavazia(Pilha *pi){
    return (pi->prim==NULL);
}

void  desempilha (Pilha* pi)
{
   if (pilhavazia(pi))
    {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }


    No*aux;
    aux=pi->prim;
    pi->prim=pi->prim->prox;
    free(aux);

    return ;
}

Pilha* criaPilha (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}
