
typedef struct fila_d Fila_d;



//fun��o que cria fila ; fila feita com vetor
Fila_d* criafila (void);

//fun��o que inserer um float na fila ; fila feita com vetor
void colocanafila (Fila_d* f, int v);

//fun��o que retira um elemento da fila; fila feita com vetor
int tiradafila (Fila_d* f);
//fun��o que verifica se a fila esta vazia ;
int filavazia (Fila_d* f);

int filacheia_dinamica(Fila_d * f);




/*********************************
            Fila estatico
*******************************/
typedef struct fila Fila;


//fun��o que cria fila ; fila feita com vetor
Fila* criafila_vector (void);

//fun��o que inserer um float na fila ; fila feita com vetor
void colocanafila_vector (Fila* f, int v);

//fun��o que retira um elemento da fila; fila feita com vetor
int tiradafila_vector (Fila* f);
//fun��o que verifica se a fila esta vazia ;
int filavazia_vector (Fila* f);


void libera_vector (Fila* f);
