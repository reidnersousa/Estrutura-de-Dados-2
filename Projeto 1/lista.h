



struct produto
{
    int codigo;
    char categoria[30];
    char nome[30];
    char descricao[70];
    char localArmaze[30];
    int qtdEstoque;

    int connsumoMedio;
    int tempReposicao;
    int tempo;

};
struct lista
{
    struct   produto info;
    struct lista*prox;
};



typedef struct lista Lista;

typedef struct produto Produto;

/**Teste n�o funciono **/
/*
struct produto p6={322,"Produtos de Teste","TEste",
    "s�o subst�ncias que s�o usando na Limpeza",
    "Setor De Teste",33};

    */
/**Teste */
/**PRODUTO*/
//Fun��o que faz o c�lculo dos estoque m�nimos
float estoqueMin( int tempReposicao, int tempo ,int consumoMedio1);

//Fun��o que faz o c�lculo dos consumoMedio
float consumoMedio( int consItens, int tempo );

//Fun��o que faz o c�lculo Suprimento
float calLoteSuprimento(int custoPedido , int Demanda, int CustArmazena);

//Fun��o que c�lcula o estoqueMax
float estoqueMax(int estoqueMin1 , int  loteReposicao);

//Fun��o que verifica se tem produto no estoque � fazer um descremento com
// base na quantidade comprada
void EmitirPedido(Lista * l, Produto v, int x);

//Fun��o que emitir todos os produtos
void imprimeTodosProduto(Lista *l);

//Fun��o que identificar o produto
Lista* buscaProdutoCodigo (Lista* l, int v);

//Fun��o definir onde vai ser guardando uma variavel
int GuardarMaterial(Lista *l,  Produto v1);

//Fun��o que inserir Produto
Lista *inserirProdutoTeste(Lista * l, Produto i);

//Reservar materias mediante solicita��es
void ComprarProduto(Lista * l,Produto v,int x);


/**Fim produtos ***/

Lista* inicializaE (void);

Lista* insereE (Lista* l, int i);

/* fun��o imprime: imprime valores dos elementos */
void imprimeE (Lista* l);


/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */

/* fun��o busca: busca um elemento na lista */
Lista* buscaE (Lista* l, int v);


/* fun��o retira: retira elemento da lista */
Lista* retiraE (Lista* l, int v);

void liberaE (Lista* l);

/* fun��o auxiliar: cria e inicializa um n� */
Lista* criaE (int v);




int igual (Lista* l1, Lista* l2);



