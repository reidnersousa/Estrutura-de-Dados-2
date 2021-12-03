#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>
#include "filadeints.h"

#define N 100

int main()
{


    Fila*f=criafila();
    colocanafila(f,20);
    imprime_dinamica(f);
    printf("\n\n");
    printf("Tamanho %d\n",filacheia_dinamica(f));
    colocanafila(f,10);
    colocanafila(f,11);
    tiradafila(f);
    imprime_dinamica(f);
    colocanafila(f,12);
    printf("\n");
    imprime_dinamica(f);

    colocanafila(f,13);
    colocanafila(f,133);
    printf("Tamanho %d\n",filacheia_dinamica(f));
    imprime_dinamica(f);
    tiradafila(f);
    //colocanafila(f,111);
    printf("Tamanho %d\n",filacheia_dinamica(f));

    /*

    Fila* f = criafila_vector();
    ///colocanafila(f,20.0);
    colocanafila_vector(f,20);
    colocanafila_vector(f,21);
    colocanafila_vector(f,24);
    imprime_vector(f);
    printf("Primeiro elemento: %d\n", tiradafila_vector(f));
    printf("Segundo elemento: %d\n", tiradafila_vector(f));


    imprime_vector(f);

    filacheia_vector(f);


    libera_vector(f);

    */

    return 0;
}
