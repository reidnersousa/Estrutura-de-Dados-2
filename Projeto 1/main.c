#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "Retangulo.h"

/**8
teste***/

/**Ultima atualização 16/11/2021 13:26*/

//Estrutura autorreferenciada

int main()
{
    int x;
    inicializar();


    struct produto p1= {112,"congelados","Frango","O frango possui carne de coloração branca",
        "Setor Norte",111
    };

    struct produto p2= {50,"enlatados","Milho","Após abrir deve-se consumir dentro do perido de 30 dias",
        "Setor Sul",28
    };

    struct produto p3= {30,"Vegetais","Maça","maça é um fruto de arvore macieria",
        "Setor Leste",19
    };

    struct produto p4= {333,"Produtos de Limpeza","Desinfetante",
        "são substâncias que são usando na Limpeza",
        "Setor Oeste",30
    };


    struct produto p5= {111,"arroz",NULL,NULL,NULL,NULL};

    Lista*pro1;
    pro1=inicializaE();
    printf("Primeiro\n");
    // pro1=inserirProdutoTeste(pro1,p1);

    //controleFuncionario(pro1,p1);

    printf("\n\n proximo passo \n\n");
    pro1=controleMestre(pro1,p1,p2);
    /*Da erro aqui*/
    //imprimeTodosProduto(pro1);
/*da erro aqui */




    /*
        printf("Quinto\n");
        pro1=inserirProdutoTeste(pro1,p5);
        imprimeTodosProduto(pro1);
    */


    /*
        buscaProdutoCodigo(pro1,333);
        ComprarProduto(pro1,p1,10);

        imprimeTodosProduto(pro1);
    */
    printf("\n\n");


    system("pause");
    return 0;


}




/*
strlen Tamanho da string
strcpy copiar uma string
strcat concatenar duas string junta 2 string
strcmp  comapaar duas string
*/
