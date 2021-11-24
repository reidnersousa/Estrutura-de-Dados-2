

#define MAX 50


/*
Autor : Reidner Sousa dos Santos
Projeto : Pilha
Versao : 1.2
Ultima atualiza��o : 10/11/2021 11:15

*/


/********************************************************
                    IMPLEMENTA��O DE PILHA COM VETOR
***********************************************************/
struct pilha
{
    int n;
    float vet[MAX];
};


typedef struct pilha Pilha;

/*Criar uma pilha com vetor */
Pilha* cria_vetor (void);
/*Fun��o que inserir um elemento na pilha;pilha  com vector */
void push_vetor (Pilha* p, float v);
/*Fun��o que retirar um elemento da pilha ; pilha com vector*/
float pop_vetor (Pilha* p);
/*Fun��o que verifica se a pilha � vazia ;pilha com vector*/
int vazia_Vetor (Pilha* p);
/*fun��o para liberar a mem�ria alocada pela pilha ; �pilha com vector */
void libera_vetor (Pilha* p);


/**********************************************************************************8
                        IMPLEMENTA��O DE PILHA COM LISTA
*****************************************************************************/

struct no
{
    float info;
    struct no* prox;
};
typedef struct no No;

typedef struct pilha_lista Pilha_lista;
struct pilha_lista
{
    No* prim;
};

/*A fun��o cria aloca a estrutura da pilha e inicializa a lista como sendo vazia.*/
Pilha_lista* cria_lista (void);

/* fun��o auxiliar: insere no in�cio */
No* ins_ini (No* l, float v);

/* fun��o auxiliar: retira do in�cio */
No* ret_ini (No* l);

/*fun��o que inserir um elemento na pilha ; pilha com lista */
void push_lista (Pilha_lista* p, float v);
/*Fun��o que retirar um elemento na pilha ; pilha com lista */
float pop_lista (Pilha_lista* p);
/*A pilha estar� vazia se a lista estiver vazia ; pilha com lista */
int vazia_lista (Pilha_lista* p);
/*vai liberar os elementos armazenado na memoria */
void libera_lista (Pilha_lista* p);
/*vai imprimiro os elementos da pilha ; pilha com lista */
void imprime_lista (Pilha_lista* p);

