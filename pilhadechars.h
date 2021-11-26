

//função criar pilha ; pilha com lista


typedef struct pilha Pilha;

void push (Pilha* p, int c);

void  pop (Pilha* p);


/**Funções do deve   Implementação Biblioteca (Pilhas Dinâmicas) */

//função que empilha faz o push
void empilha(Pilha*pi ,char val );
//função que verifica se a pilha esta vazia
int pilhavazia(Pilha *pi);
//função que retira um elemento da pilha
void  desempilha (Pilha* pi);
//função cria uma pilha ; pilha feita com uma lista .
Pilha* criaPilha (void);
