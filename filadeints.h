



typedef struct fila Fila;


//fun��o que cria fila ; fila feita com vetor
Fila* criafila (void);

//fun��o que inserer um float na fila ; fila feita com vetor
void colocanafila (Fila* f, float v);

//fun��o que retira um elemento da fila; fila feita com vetor
float tiradafila (Fila* f);
//fun��o que verifica se a fila esta vazia ;
int filavazia (Fila* f);


void libera (Fila* f);
