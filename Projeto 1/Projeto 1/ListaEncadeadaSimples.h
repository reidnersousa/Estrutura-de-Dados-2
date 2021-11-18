



struct lista
{
    int info;
    struct lista*prox;
};
typedef struct lista Lista;


/* função auxiliar: cria e inicializa um nó */
/** auxilar a insererordena*/
Lista* cria (int v);



/* função insere_ordenado: insere elemento em ordem */
/**Inserção ordenada **/
Lista* insere_ordenado (Lista* l, int v);


/* função imprime: imprime valores dos elementos */
/**Impressão*/
void imprime (Lista* l);


/* função busca: busca um elemento na lista */
/** Busca informação **/
Lista* busca (Lista* l, int v);


/* função vazia: retorna 1 se vazia ou 0 se não vazia */
/** Teste vazia **/
int vazia (Lista* l);


/* função retira: retira elemento da lista */
/**Exclusão */
Lista* retira (Lista* l, int v);


//Liberação da lista
/**  Liberação da Lista  **/
void libera (Lista* l);



/**Função que checa se duas lista são iguais **/
int igual (Lista* l1, Lista* l2);


