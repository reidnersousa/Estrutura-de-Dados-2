#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no
{
    char  info[50];
    struct no* prox;
};
typedef struct no No;

struct pilha
{
    No* prim;
};

typedef struct pilha Pilha;

//fun��o criar pilha ; pilha com lista
Pilha* cria (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

/* fun��o auxiliar: insere no in�cio */
/**esse char ta certo?*/
No* ins_ini_char (No* l, char cha[50])
{
    No* p = (No*) malloc(sizeof(No));

    //p->info = v;
    strcpy(p->info,cha);
    p->prox = l;
    return p;
}
/* fun��o auxiliar: retira do in�cio */
No* ret_ini_char (No* l)
{
    No* p = l->prox;
    free(l);
    return p;
}



void push (Pilha* p, char c[50])
{
    p->prim = ins_ini(p->prim,c);
}
char  pop (Pilha* p)
{
    float v;
    char c[50];
    if (vazia(p))
    {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }

    //strcpy(p->info,cha);
    //p->info = v;
    strcpy(p->prim->info,c);
    //v = p->prim->info;
    p->prim = ret_ini(p->prim);
    return c;
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

/* imprime: vers�o com lista */
void imprime (Pilha* p)
{
    No* q;
    for (q=p->prim; q!=NULL; q=q->prox)
        printf("%c\n",q->info);
}

