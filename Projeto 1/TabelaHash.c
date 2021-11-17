#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "TabelaHash.h"

//Definiççao do tipo Hash
struct hash
{
    int qtd,TABLE_SIZE;
    struct aluno**itens;
};


Hash*criaHash(int TABLE_SIZE)
{
    Hash *ha=(Hash*)malloc (sizeof(Hash));
    if(ha != NULL)
    {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens=(struct aluno**)malloc(TABLE_SIZE*sizeof(struct aluno*));
        if(ha->itens==NULL)
        {
            free(ha);
            return NULL;
        }
        ha->qtd=0;
        for(i=0; i<ha->TABLE_SIZE; i++)
        {
            ha->itens[i]=NULL;
        }
    }
    return ha;
}



void liberaHash(Hash *ha)
{
    if(ha!=NULL)
    {
        int io;
        for(io=0; io<ha->TABLE_SIZE; io++)
        {
            if(ha->itens[io]!=NULL)
            {
                free(ha->itens[io]);
            }
        }
        free(ha->itens);
        free(ha);
    }
}



int chaveDisivisao(int chave, int TABLE_SIZE)
{
    return (chave & 0x7FFFFFFF)&TABLE_SIZE;
}


int chaveMultiplicacao(int chave, int TABLE_SIZE)
{
    float A= 0.6180339887;
    float val=chave*A;
    val=val-(int)val;
    return (int)(TABLE_SIZE *val);
}

int chaveDobla(int chave, int TABLE_SIZE)
{
    int num_bits=10;
    int parte1=chave>>num_bits;
    int parte2=chave &(TABLE_SIZE-1);
    return (parte1 ^parte2);
}
int valorString(char*str)
{
    int i1, valor=7;
    int tam=strlen(str);
    for(i1=0; i1<tam; i1++)
    {
        valor=31*valor+(int)str[i1];
    }
    return valor;
}


int insereHash_SemColisao(Hash*ha,struct aluno ap)
{
    if(ha==NULL|| ha->qtd==ha->TABLE_SIZE)
    {
        return 0;
    }
    int chave=ap.matricula;

    int pos = chaveDisivisao(chave,ha->TABLE_SIZE);
    struct aluno*novo;
    novo= (struct aluno*)malloc (sizeof(struct aluno));
    if(novo==NULL)
    {
        return 0;
    }
    *novo=ap;
    ha->itens[pos]=novo;
    ha->qtd++;

    return 1;
}

int buscaHash_SemColisao(Hash* ha, int mat, struct aluno *ap)
{
    if(ha==NULL)
    {
        return 0;
    }
    int pos=chaveDisivisao(mat,ha->TABLE_SIZE);
    if(ha->itens[pos]==NULL)
    {
        return 0;
    }
    *ap=*(ha->itens[pos]);
    return 1;
}

int sondagemLinerar(int pos, int i, int TABLE_SIZE)
{
    return ((pos+i)&0x7FFFFFFF)&TABLE_SIZE;
}

int sondagemQuadratica(int pos, int i, int TABLE_SIZE)
{
    pos=pos+2*i+5*i*i;
    return ((pos+i)&0x7FFFFFFF)&TABLE_SIZE;
}
int duplaHash(int h1,int chave, int i, int TABLE_SIZE)
{
    int h2 = chaveDisivisao(chave,TABLE_SIZE-1)+1;
    return ((h1 + i*h2) & 0x7FFFFFFF)%TABLE_SIZE;
}



int insereHash_EnderAberto(Hash * ha,struct aluno ap)
{
    if(ha==NULL || ha->qtd == ha ->TABLE_SIZE){
        return 0;
    }
    int chave=ap.matricula;
    int ipp, pos, newPos;
    pos=chaveDisivisao(chave, ha->TABLE_SIZE);
    for(ipp=0; ipp<ha->TABLE_SIZE; ipp++)
    {

        newPos = sondagemLinerar(pos,ipp,ha->TABLE_SIZE);
        if(ha->itens[newPos]==NULL){

            struct aluno*novo;
            novo=(struct aluno*)
                malloc(sizeof(struct aluno));
            if(novo==NULL){
                printf("Novo hash\n");
                return 0;

            }
            *novo=ap;
            ha->itens[newPos]=novo;
            ha->qtd++;
            printf("Posição %d\n",ipp);
            return 1;
        }
        printf("Colisao \n");
    }
    return 0;
}

int buscaHash_EnderAberto(Hash*ha, int mat,struct  aluno *ap){
    if(ha==NULL){
        return 0;
    }
    int i, pos, newPos;
    pos=chaveDisivisao(mat,ha->TABLE_SIZE);
    for(i=0; i<ha->TABLE_SIZE; i++){
        newPos = sondagemLinerar(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos]==NULL){
            return 0;
        }
        if(ha->itens[newPos]->matricula == mat){
            *ap= *(ha->itens[newPos]);
            return 1;
        }
    }
    return 0;
}

// tem erro aqui re assitir as aulas de tabela hash



int Procura_De_Elemento(Hash*ha, int mat,struct  aluno *ap){
    if(ha==NULL){
        return 0;
    }
    int i, pos, newPos;
    pos=chaveDisivisao(mat,ha->TABLE_SIZE);
    for(i=0; i<ha->TABLE_SIZE; i++){
        newPos = sondagemLinerar(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos]==NULL){
            printf("O espaço esta indispoivvel\n");
            printf("e necessario um novo HAsh\n");
            return 0;
        }
        if(ha->itens[newPos]->matricula == mat){
            *ap= *(ha->itens[newPos]);
            printf("O espaço esta disponivel\n");
            return 1;
        }
    }
    return 0;
}



