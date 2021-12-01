#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>
#include "filadeints.h"

#define N 100

int main()
{




    Fila* f = criafila();
    ///colocanafila(f,20.0);
    colocanafila(f,20.8);
    colocanafila(f,21);
    colocanafila(f,24);
    imprime(f);
    printf("Primeiro elemento: %d\n", tiradafila(f));
    printf("Segundo elemento: %d\n", tiradafila(f));


    imprime(f);

    filacheia(f);


    libera(f);


    return 0;
}
