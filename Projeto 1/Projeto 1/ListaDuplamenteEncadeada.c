

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"ListaDuplamenteEncadeada.h"


struct lista2
{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};











/* inserção no início */
Lista2* insere_dup (Lista2* l, int v)
{
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = v;
    novo->prox = l;
    novo->ant = NULL;
    /* verifica se lista não está vazia */
    if (l != NULL)
        l->ant = novo;
    return novo;
}

/* função busca: busca um elemento na lista */
Lista2* busca_dup (Lista2* l, int v)
{
    Lista2* p;
    for (p=l; p!=NULL; p=p->prox)
        if (p->info == v)
            return p;
    return NULL; /* não achou o elemento */
}


/* função retira: retira elemento da lista */
Lista2* retira_dup (Lista2* l, int v)
{
    Lista2* p = busca(l,v);
    if (p == NULL)
        return l; /* não achou o elemento: retorna lista inalterada */
    /* retira elemento do encadeamento */
    if (l == p)
        l = p->prox;
    else
        p->ant->prox = p->prox;
    if (p->prox != NULL)
        p->prox->ant = p->ant;
    free(p);
    return l;
}
