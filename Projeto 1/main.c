#include <stdio.h>
#include <stdlib.h>
#include "BuscaOrdenadacao.h"
#include "BubbleSort.h"
int main()
{
    int Vv[7]={23,4,67,-8,54,90,21};


    int vet[10]={-8,-5,1,4,14,21,23,54,67,90};

    struct aluno V[3]={{2,"EEE",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {3,"ANA",5.7,6.1,7.5}};
    if(buscaLinearNome(V,3,"EEE")!=1){
        printf("RTH ok \n");
    }
    else{
        printf("ERRRo\n");
    }

    if(buscaBinaria(vet,10,14)!=1){
        printf("OK\n");
    }
    else{
        printf("ERRo\n");
    }

    int lop[10]={23,4,67,-8,90,54,21};
    if(bubbleSort1(lop,10)){
        printf("OKOKOK");
    }
    else{
        printf("ERRER3");
    }
    int i;
    struct alunoVetor V1[3]={{2,"EEE",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {3,"ANA",5.7,6.1,7.5}};
    insertionStorNome(V1,3);
    for(i=0;i<3;i++){
        printf("%d) %s\n",V1[i].matricula,V1[i].nome);
    }

    int pl;

    //qsort(lop,10,sizeof(int),comparaCrescente);
   // qsort(V1,3,sizeof(struct alunoVetor),comparaNome);
    for(pl=0;pl<4;pl++){
        printf("%d) %s\n",V1[pl].matricula,V1[pl].nome);
    }

    for(pl=0;pl<10;pl++){
        printf("Number = %d\n",lop[pl]);
    }

    printf("Fim da exeucao");
    return 0;
}// fim da main


