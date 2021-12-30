#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};


//struct aluno V[6];



int buscaLinearMatricula(struct aluno *v2 , int n2 , int elem2){
    int i2;
    for(i2=0;i2<n2;i2++){
        if(elem2==v2[i2].matricula)
            return i2;
    }
    return -1;
}


int buscaLinearNome(struct aluno *vn , int nn , int elemn){
    int in;
    for(in=0;in<nn;in++){
        if(strcmp(elemn,vn[in].nome)==0)
            return in;
    }
    return -1;
}




int buscaLinear(int *v,int n,int elem){
    int i;
    for(i=0;i<n;i++){
        if(elem== v[i])
            printf("Valor igual %d\n",v);
            return i;
    }
    printf("Valor diferente continua a busca \n");
    return -1;
}

int buscaOrdenada(int *v,int n, int elem){
    int i;
    for(i=0;i<n;i++){
        if(elem== v[i])
            return i;
        else{
            if(elem<v[i]){
                return -1;
            }
        }
    }
    return -1;

}

int buscaBinaria(int *v,int n,int elem){
    int i,inicio,meio,ffinal;
    inicio=0;
    ffinal=n-1;
    while(inicio<=ffinal){
        meio=(inicio + ffinal)/2;
        if(elem<v[meio]){
            ffinal=meio-1;
        }
        else{
            if(elem>v[meio]){
                inicio= meio+1;
            }
            else
                return meio;
        }
    }
    return -1;
}
