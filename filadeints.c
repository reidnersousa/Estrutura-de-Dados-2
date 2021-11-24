

#include<stdio.h>
#include<stdlib.h>
#include "filadeints.h"




#define N 100
struct fila
{
    int ini, fim;
    float vet[N];
};

int incr (int i)
{

    if (i == N-1)
        return 0;
    else
        return i+1;
}


Fila* criafila (void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = 0; /* inicializa fila vazia */
    return f;
}

void colocanafila (Fila* f, float v)
{
    if (incr(f->fim) == f->ini)
    {
        /* fila cheia: capacidade esgotada
        */
        printf("Capacidade da fila estourou.\n");
        exit(1); /* aborta programa */
    }
    /* insere elemento na próxima posição livre */
    f->vet[f->fim] = v;
    f->fim = incr(f->fim);
}

float tiradafila (Fila* f)
{
    float v;
    if (filavazia(f))
    {
        printf("Fila vazia.\n");
        exit(1); /* aborta programa */
    }
    /* retira elemento do início */
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
        printf("%f\n",f->vet[i]);
}
