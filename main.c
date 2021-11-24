#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>
#include "filadeints.h"

#define N 100

int main()
{




    Fila* f = criafila();
    colocanafila(f,20.0);
    colocanafila(f,20.8);
    colocanafila(f,21.2);
    colocanafila(f,24.3);
    imprime(f);
    printf("Primeiro elemento: %f\n", tiradafila(f));
    printf("Segundo elemento: %f\n", tiradafila(f));
    printf("Configuracao da fila:\n");
    imprime(f);
    libera(f);


    return 0;
}
