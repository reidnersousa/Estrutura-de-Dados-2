



struct lista
{
    int info;
    struct lista*prox;
};
typedef struct lista Lista;


/* fun��o auxiliar: cria e inicializa um n� */
/** auxilar a insererordena*/
Lista* cria (int v);



/* fun��o insere_ordenado: insere elemento em ordem */
/**Inser��o ordenada **/
Lista* insere_ordenado (Lista* l, int v);


/* fun��o imprime: imprime valores dos elementos */
/**Impress�o*/
void imprime (Lista* l);


/* fun��o busca: busca um elemento na lista */
/** Busca informa��o **/
Lista* busca (Lista* l, int v);


/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
/** Teste vazia **/
int vazia (Lista* l);


/* fun��o retira: retira elemento da lista */
/**Exclus�o */
Lista* retira (Lista* l, int v);


//Libera��o da lista
/**  Libera��o da Lista  **/
void libera (Lista* l);



/**Fun��o que checa se duas lista s�o iguais **/
int igual (Lista* l1, Lista* l2);


