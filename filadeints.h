



typedef struct fila Fila;


//fun��o que cria fila ; fila feita com vetor
Fila* criafila (void);

//fun��o que inserer um float na fila ; fila feita com vetor
void colocanafila (Fila* f, int v);

//fun��o que retira um elemento da fila; fila feita com vetor
int tiradafila (Fila* f);
//fun��o que verifica se a fila esta vazia ;
int filavazia (Fila* f);


void libera (Fila* f);
