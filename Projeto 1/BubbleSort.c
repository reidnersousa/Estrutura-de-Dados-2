#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BubbleSort.h"

#define ww 100






void bucketSort(int *vb,int nb)
{
    int ib,jb,maiorb,menorb,nroBaldes,posb;
    struct balde *bd;
    maiorb=menorb=vb[0];
    for(ib=1;ib<nb;ib++){
        if(vb[ib]>maiorb)maiorb=vb[ib];
        if(vb[ib]<menorb)menorb=vb[ib];
    }
    nroBaldes=(maiorb-menorb)/TAM+1;
    bd=(struct balde *)malloc(nroBaldes*sizeof(struct balde));
    for(ib=0;ib<nroBaldes;ib++){
            bd[ib].qtd=0;
    }
    for(ib=0;ib<nb;ib++){
        posb=(vb[ib]-menorb)/TAM;
        bd[posb].valores[bd[posb].qtd]=vb[ib];
        bd[posb].qtd++;
    }
    posb=0;
    for(ib=0;ib<nroBaldes;ib++){
        insertionStor(bd[ib].valores,bd[ib].qtd);
        for(jb=0;jb<bd[ib].qtd;jb++){
            vb[posb]=bd[ib].valores[jb];
            posb++;
        }
    }
    free(bd);
}









void countingSort(int *cv,int nc){
    int ic,jc,kc;
    int baldes[ww];
    for(ic=0;ic<ww;ic++){
        baldes[ic]=0;
    }
    for(ic=0;ic<nc;ic++){
        baldes[cv[ic]]++;
    }
    for(ic=0,jc=0;jc<ww;jc++){
            for(kc=baldes[jc];kc>0;kc--){
                cv[ic++]=jc;
            }

    }
}









/*****Usando a função qsort ****/

int comparaNome(const void * a , const void *b)
{
    int r=strcmp((*(struct alunoVetor*)a).nome,
                 (*(struct alunoVetor*)b).nome);
    if(r==0){
        return 0;
    }
    else{
        if(r<0){
            return -1;
        }
        else{
            return 1;
        }
    }
}

int comparaMatricula(const void * a , const void *b){
    if((*(struct alunoVetor*)a).matricula==
       (*(struct alunoVetor*)b).matricula){
        return 0;// iguais
    }
    else
    if((*(struct alunoVetor*)a).matricula<
       (*(struct alunoVetor *)b).matricula){
        return -1;//vem antes
    }
    else{
        return 1;// vem depois
    }

}






int comparaCrescente(const void * a, const void *b)
{
    if(*(int*)a<*(int*)b)
    {
        return -1;// vem antes
    }
    else
    {
        return 1;//vem depois
    }
}
//Todo voce parou na aula 55
int comparaDecrescente(const void * a, const void *b)
{
    if(*(int*)a==*(int*)b)
    {
        if(*(int*)a<*(int*)b)
        {
            return -1;// vem antes
        }
        else
        {
            return 1;//vem depois
        }
    }
}



void insertionStorMatricula(struct alunoVetor *vm,int mn)
{
    int im,jm;
    struct alunoVetor auxm;
    for(im=1; im<mn; im++)
    {
        auxm=vm[im];
        for(jm=im; (jm>0)&&(auxm.matricula<vm[jm-1].matricula); jm--)
        {
            vm[jm]=vm[jm-1];
        }
        vm[jm]=auxm;
    }
}


void insertionStorNome(struct alunoVetor *vs,int ns)
{
    int is,js;
    struct alunoVetor auxs;
    for(is=1; is<ns; is++)
    {
        auxs=vs[is];
        for(js=is; (js>0)&&(strcmp(auxs.nome,vs[js-1].nome)<0); js--)
        {
            vs[js]=vs[js-1];
        }
        vs[js]=auxs;
    }
}












void bubbleSort1(int *V, int N)
{
    int i, continua, aux, fim =N;
    do
    {
        continua=0;
        for(i=0; i<fim-1; i++)
        {
            if(V[i]>V[i+1])
            {
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
                continua=i;
            }
        }
        fim--;
    }
    while(continua != 0);
}
// tbm tem na aula 54 ordenção de vetor de Struct
void insertionStor(int *vv, int nn)
{
    int ii,jj,auxx;
    for(ii=1; ii<nn; ii++)
    {
        auxx=vv[ii];
        for(jj=ii; (jj>0)&&(auxx<vv[jj-1]); jj--)
        {
            vv[jj]=vv[jj-1];
        }
        vv[jj]=auxx;
    }
}

void selectionSort(int *vetor, int tam)
{
    int ind,jnd,menor,troca;
    for(ind=0; ind<tam-1; ind++)
    {
        menor=ind;
        for(jnd=ind+1; jnd<tam; jnd++)
        {
            if(vetor[jnd]<vetor[menor])
            {
                menor=jnd;
            }
            if(ind!=menor)
            {
                troca=vetor[ind];
                vetor[ind]=vetor[menor];
                vetor[menor]=troca;
            }
        }
    }
}

void mergeSort(int *ll,int inicio, int fim)
{
    int meio;
    if(inicio<fim)
    {
        meio=floor((inicio+fim)/2);
        mergeSort(ll,inicio,meio);
        mergeSort(ll,meio+1,fim);
        merge1(ll,inicio,meio,fim);
    }
}

void merge1(int *v,int inicio,int meio,int fim)
{
    int*temp,p1,p2,tamanho,i,j,k;
    int fim1=0;
    int fim2=0;
    tamanho=fim-inicio+1;
    p1=inicio;
    p2=meio+1;
    temp=(int*)malloc(tamanho*sizeof(int));
    if(temp!=NULL)
    {
        for(i=0; i<tamanho; i++)
        {
            if(!fim1&&!fim2)
            {
                if(v[p1]<v[p2])
                {
                    temp[i]=v[p1++];
                }
                else
                    temp[i]=v[p2++];
                if(p1>meio)
                {
                    fim1=1;
                }
                if(p2>fim)
                {
                    fim2=1;
                }
            }
            else
            {
                if(!fim1)
                {
                    temp[i]=v[p1++];
                }
                else
                {
                    temp[i]=v[p2++];

                }
            }

        }
        for(j=0, k=inicio; j<tamanho; j++,k++)
        {
            v[k]=temp[j];
        }
    }
    free(temp);

}








void quickSort(int*qv,int qinicio, int qfim)
{
    int pivo;
    if(qfim>qinicio)
    {
        pivo= particiona(qv,qinicio,qfim);
        quickSort(qv,qinicio,pivo-1);
        quickSort(qv,pivo+1,qfim);
    }
}

int particiona(int*qv,int qinicio, int qfim)
{
    int esq,dir,pivoq,auxq;
    esq=qinicio;
    dir=qfim;
    pivoq=qv[qinicio];
    while(esq<dir)
    {
        while(qv[esq]<=pivoq)
        {
            esq++;
        }
        while(qv[dir]>pivoq)
        {
            dir--;
        }
        if(esq<dir)
        {
            auxq=qv[esq];
            qv[esq]=qv[dir];
            qv[dir]=auxq;
        }
    }
    qv[qinicio]=qv[dir];
    qv[dir]=pivoq;
    return dir;
}





void heapSort(int *veth,int nh)
{
    int ih,auxh;
    for(ih=(nh-1)/2; ih>=0; ih--)
    {
        criaHeap(veth,ih,nh-1);
    }
    for(ih=nh-1; ih>=1; ih--)
    {
        auxh=veth[0];
        veth[0]=veth[ih];
        veth[ih]=auxh;
        criaHeap(veth,0,ih-1);
    }
}

void criaHeap(int *vetc,int ic, int fc)
{
    int auxc=vetc[ic];
    int jc=ic*2+1;
    while(jc<=fc)
    {
        if(jc<fc)
        {
            if(vetc[jc]<vetc[jc+1])
            {
                jc=jc+1;
            }
        }
        if(auxc<vetc[jc])
        {
            vetc[ic]=vetc[jc];
            ic=jc;
            jc=2*ic+1;
        }
        else
        {
            jc=fc+1;
        }
    }
    vetc[ic]=auxc;
}
