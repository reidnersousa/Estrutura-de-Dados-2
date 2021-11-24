
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilha.h"

Calc* cria_calc (char* formato)
{
    Calc* c = (Calc*) malloc(sizeof(Calc));
    strcpy(c->f,formato);
    //c->p = cria(); /* cria pilha vazia */
    c->p=cria_lista();/*Cria pilha vazia pilha com lista */
    return c;
}

void operando (Calc* c, float v)
{
    /* empilha operando */
    push_lista(c->p,v);
    /* imprime topo da pilha */
    printf(c->f,v);
}

void operador (Calc* c, char op)
{
    float v1, v2, v;
    /* desempilha operandos */
    if (vazia_lista(c->p))
        v2 = 0.0;
    else
        v2 = pop_lista(c->p);
    if (vazia_lista(c->p))
        v1 = 0.0;
    else
        v1 = pop_lista(c->p);
    /* faz operação */
    switch (op)
    {
    case '+':
        v = v1+v2;
        break;
    case '-':
        v = v1-v2;
        break;
    case '*':
        v = v1*v2;
        break;
    case '/':
        v = v1/v2;
        break;
    }
    /* empilha resultado */
    push_lista(c->p,v);
    /* imprime topo da pilha */
    printf(c->f,v);
}

void libera_calc (Calc* c)
{
    libera_lista(c->p);
    free(c);
}



