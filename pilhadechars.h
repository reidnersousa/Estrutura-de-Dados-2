

//fun��o criar pilha ; pilha com lista


typedef struct pilha Pilha;

void push (Pilha* p, int c);

void  pop (Pilha* p);


/**Fun��es do deve   Implementa��o Biblioteca (Pilhas Din�micas) */

//fun��o que empilha faz o push
void empilha(Pilha*pi ,char val );
//fun��o que verifica se a pilha esta vazia
int pilhavazia(Pilha *pi);
//fun��o que retira um elemento da pilha
void  desempilha (Pilha* pi);
//fun��o cria uma pilha ; pilha feita com uma lista .
Pilha* criaPilha (void);
