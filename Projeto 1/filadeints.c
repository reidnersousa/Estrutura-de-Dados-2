

#include<stdio.h>
#include<stdlib.h>
#include "filadeints.h"


/************************ **************************
            Dinamica
*******************************************8*/

struct no
{
    int  info;

    struct no* prox;
};
typedef struct no No;

struct fila_d
{
    int tamanho_total;
    int tam;
    No* ini;
    No* fim;
};

/**muda nome **/
Fila_d* criafila (void)
{
    Fila_d* f = (Fila_d*) malloc(sizeof(Fila_d));
    f->ini  = f->tam =f->fim = NULL;
    f->tamanho_total=5;
    return f;
}


/* função auxiliar: insere no fim */
No* ins_fim (No* fim, int  v)
{
    No* p = (No*) malloc(sizeof(No));

    p->info = v;

    p->prox = NULL;

    if (fim != NULL) /* verifica se lista não estava vazia */
        fim->prox = p;
    return p;
}
/* função auxiliar: retira do início */
No* ret_ini (No* ini)
{
    No* p = ini->prox;
    free(ini);
    return p;
}

void colocanafila (Fila_d* f, int v)
{
    f->tam++;
    f->fim = ins_fim(f->fim,v);
    if (f->ini==NULL) /* fila antes vazia? */
        f->ini = f->fim;
}
int  tiradafila (Fila_d* f)
{
    int  v;
    if (filavazia(f))
    {
        printf("Fila vazia.\n");
        exit(1); /* aborta programa */
    }

    f->tam--;
    v = f->ini->info;
    f->ini = ret_ini(f->ini);
    if (f->ini == NULL) /* fila ficou vazia? */
        f->fim = NULL;
    return v;
}

int filavazia (Fila_d* f)
{
    return (f->ini==NULL);
}

void libera_d (Fila_d* f)
{
    No* q = f->ini;
    while (q!=NULL)
    {
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}
/* imprime: versão com lista */
void imprime_dinamica (Fila_d* f)
{
    No* q;
    for (q=f->ini; q!=NULL; q=q->prox){
        printf("%d\n",q->info);
    }

    printf("%d\n",f->tam);

}



int filacheia_dinamica(Fila_d * f)
{
    return !(f->tam < f->tamanho_total);

}


/**********************************************
                Com vetor (estatico)
**************************************************/


#define N 50
struct fila
{
    int ini, fim;
    int tam;

    int vet[N];
};









int incr (int i )
{


    return i=(i+1)%N;


}


Fila* criafila_vector (void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));

    f->ini =f->tam = f->fim = 0; /* inicializa fila vazia */

    return f;
}

void colocanafila_vector (Fila* f, int v)
{
    if (filacheia_vector(f))
    {

        /* fila cheia: capacidade esgotada
        */
        printf("Capacidade da fila estourou.\n");
        exit(1); /* aborta programa */
    }
    /* insere elemento na próxima posição livre */


    f->tam++;
    f->vet[f->fim] = v;
    f->fim = incr(f->fim);
}

int tiradafila_vector (Fila* f)
{
    int v;
    if (filavazia_vector(f))
    {
        printf("Fila vazia.\n");
        exit(1); /* aborta programa */
    }
    /* retira elemento do início */
    f->tam--;
    v = f->vet[f->ini];
    f->ini = incr(f->ini);
    return v;
}

int filavazia_vector (Fila* f)
{

    return (f->ini == f->fim);
}
//fila cheia
void libera_vector (Fila* f)
{
    free(f);
}



/* imprime: versão com vetor */
void imprime_vector (Fila* f)
{
    int i;
    for (i=f->ini; i!=f->fim; i=incr(i))
    {
        //printf("%d\n",f->vet[i]);

        printf(" valores %d\n",f->vet[i]);

    }
    printf("tamanho %d\n",f->tam);
}


int filacheia_vector(Fila * f)
{
    return !(f->tam < N);

}

int filavazia_tam_vector(Fila *f)
{
    return f->tam == 0;
}
