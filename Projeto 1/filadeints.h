
typedef struct fila_d Fila_d;



//função que cria fila ; fila feita com vetor
Fila_d* criafila (void);

//função que inserer um float na fila ; fila feita com vetor
void colocanafila (Fila_d* f, int v);

//função que retira um elemento da fila; fila feita com vetor
int tiradafila (Fila_d* f);
//função que verifica se a fila esta vazia ;
int filavazia (Fila_d* f);

int filacheia_dinamica(Fila_d * f);




/*********************************
            Fila estatico
*******************************/
typedef struct fila Fila;


//função que cria fila ; fila feita com vetor
Fila* criafila_vector (void);

//função que inserer um float na fila ; fila feita com vetor
void colocanafila_vector (Fila* f, int v);

//função que retira um elemento da fila; fila feita com vetor
int tiradafila_vector (Fila* f);
//função que verifica se a fila esta vazia ;
int filavazia_vector (Fila* f);


void libera_vector (Fila* f);
