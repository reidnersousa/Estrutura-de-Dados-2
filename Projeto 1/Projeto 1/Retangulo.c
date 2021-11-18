#include"Retangulo.h"
#include<stdio.h>
#include<stdlib.h>
struct retangulo
{
    float b;
    float h;
};

struct lista
{
    Retangulo *info;
    struct lista *prox;
};



Lista* criaRen (void)
{
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    Lista* p = (Lista*) malloc(sizeof(Lista));
    p->info = r;
    p->prox = NULL;
    return p;
}

