



typedef struct fila Fila;


//função que cria fila ; fila feita com vetor
Fila* criafila (void);

//função que inserer um float na fila ; fila feita com vetor
void colocanafila (Fila* f, int v);

//função que retira um elemento da fila; fila feita com vetor
int tiradafila (Fila* f);
//função que verifica se a fila esta vazia ;
int filavazia (Fila* f);


void libera (Fila* f);
