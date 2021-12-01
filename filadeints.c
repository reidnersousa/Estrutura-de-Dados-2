

#include<stdio.h>
#include<stdlib.h>
#include "filadeints.h"




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


Fila* criafila (void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));

    f->ini =f->tam = f->fim = 0; /* inicializa fila vazia */

    return f;
}

void colocanafila (Fila* f, int v)
{
    if (filacheia(f))
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

int tiradafila (Fila* f)
{
    int v;
    if (filavazia(f))
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

int filavazia (Fila* f)
{

    return (f->ini == f->fim);
}
//fila cheia
void libera (Fila* f)
{
    free(f);
}



/* imprime: versão com vetor */
void imprime (Fila* f)
{
    int i;
    for (i=f->ini; i!=f->fim; i=incr(i))
    {
        //printf("%d\n",f->vet[i]);

        printf(" valores %d\n",f->vet[i]);

    }
    printf("tamanho %d\n",f->tam);
}


int filacheia(Fila * f)
{
    return !(f->tam < N);

}

int filavazia_tam(Fila *f)
{
    return f->tam == 0;
}
